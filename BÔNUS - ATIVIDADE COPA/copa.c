/*
 * ============================================================
 *  SISTEMA DE GERENCIAMENTO DE PARTIDAS - COPA
 * ============================================================
 *  Funcionalidades:
 *   - Cadastro de até 20 partidas
 *   - Listagem de partidas cadastradas
 *   - Estatísticas (total, gols, média, goleada, empates)
 *   - [BÔNUS] Gravação em arquivo copa.txt
 * ============================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PARTIDAS 20

/* ── Vetores globais conforme especificado ─────────────────── */
char time1[MAX_PARTIDAS][30];
char time2[MAX_PARTIDAS][30];
int  gols1[MAX_PARTIDAS];
int  gols2[MAX_PARTIDAS];
int  totalPartidas = 0;

/* ═══════════════════════════════════════════════════════════
 *  FUNÇÃO: cadastrarPartida
 *  Registra uma nova partida nos vetores globais.
 * ═══════════════════════════════════════════════════════════ */
void cadastrarPartida(void) {
    if (totalPartidas >= MAX_PARTIDAS) {
        printf("\n[!] Limite de %d partidas atingido!\n", MAX_PARTIDAS);
        return;
    }

    int i = totalPartidas;

    printf("\n--- Cadastro de Partida ---\n");

    /* Time 1 */
    printf("Nome do Time 1: ");
    scanf(" %29[^\n]", time1[i]);

    printf("Gols do Time 1: ");
    while (scanf("%d", &gols1[i]) != 1 || gols1[i] < 0) {
        printf("[!] Valor inválido. Gols do Time 1: ");
        while (getchar() != '\n');
    }

    /* Time 2 */
    printf("Nome do Time 2: ");
    scanf(" %29[^\n]", time2[i]);

    printf("Gols do Time 2: ");
    while (scanf("%d", &gols2[i]) != 1 || gols2[i] < 0) {
        printf("[!] Valor inválido. Gols do Time 2: ");
        while (getchar() != '\n');
    }

    totalPartidas++;
    printf("\n[OK] Partida cadastrada com sucesso! (%d/%d)\n",
           totalPartidas, MAX_PARTIDAS);
}

/* ═══════════════════════════════════════════════════════════
 *  FUNÇÃO: listarPartidas
 *  Exibe todas as partidas cadastradas no formato:
 *    Time1 G1 x G2 Time2
 * ═══════════════════════════════════════════════════════════ */
void listarPartidas(void) {
    if (totalPartidas == 0) {
        printf("\n[!] Nenhuma partida cadastrada.\n");
        return;
    }

    printf("\n===== PARTIDAS CADASTRADAS =====\n");
    for (int i = 0; i < totalPartidas; i++) {
        printf("  %2d. %s %d x %d %s\n",
               i + 1, time1[i], gols1[i], gols2[i], time2[i]);
    }
    printf("================================\n");
}

/* ═══════════════════════════════════════════════════════════
 *  FUNÇÃO: mostrarEstatisticas
 *  Calcula e exibe:
 *   - Total de partidas
 *   - Total de gols
 *   - Média de gols por partida
 *   - Maior goleada (maior diferença de gols)
 *   - Quantidade de empates
 * ═══════════════════════════════════════════════════════════ */
void mostrarEstatisticas(void) {
    if (totalPartidas == 0) {
        printf("\n[!] Nenhuma partida cadastrada.\n");
        return;
    }

    int totalGols       = 0;
    int empates         = 0;
    int maiorDiferenca  = -1;
    int indiceGoleada   = 0;

    for (int i = 0; i < totalPartidas; i++) {
        /* Acumula gols */
        totalGols += gols1[i] + gols2[i];

        /* Verifica empate */
        if (gols1[i] == gols2[i]) {
            empates++;
        }

        /* Verifica maior goleada pela diferença de gols */
        int diferenca = abs(gols1[i] - gols2[i]);
        if (diferenca > maiorDiferenca) {
            maiorDiferenca = diferenca;
            indiceGoleada  = i;
        }
    }

    float media = (float)totalGols / totalPartidas;

    printf("\n===== ESTATÍSTICAS =====\n");
    printf("  Partidas : %d\n",   totalPartidas);
    printf("  Gols     : %d\n",   totalGols);
    printf("  Média    : %.2f gols por partida\n", media);
    printf("  Empates  : %d\n",   empates);
    printf("  Maior goleada:\n");
    printf("    %s %d x %d %s\n",
           time1[indiceGoleada], gols1[indiceGoleada],
           gols2[indiceGoleada], time2[indiceGoleada]);
    printf("========================\n");
}

/* ═══════════════════════════════════════════════════════════
 *  FUNÇÃO: carregarArquivo
 *  Lê copa.txt ao iniciar o programa (se existir) e preenche
 *  os vetores com as partidas salvas anteriormente.
 *  Formato esperado: Time1;Gols1;Time2;Gols2
 * ═══════════════════════════════════════════════════════════ */
void carregarArquivo(void) {
    FILE *arquivo = fopen("copa.txt", "r");

    /* Se o arquivo não existe, inicia normalmente sem partidas */
    if (arquivo == NULL) {
        return;
    }

    char linha[100];
    totalPartidas = 0;

    while (totalPartidas < MAX_PARTIDAS &&
           fgets(linha, sizeof(linha), arquivo) != NULL) {

        /* Faz o parse de cada linha: Time1;Gols1;Time2;Gols2 */
        if (sscanf(linha, "%29[^;];%d;%29[^;];%d",
                   time1[totalPartidas], &gols1[totalPartidas],
                   time2[totalPartidas], &gols2[totalPartidas]) == 4) {
            totalPartidas++;
        }
    }

    fclose(arquivo);

    if (totalPartidas > 0) {
        printf("\n[OK] %d partida(s) carregada(s) de copa.txt!\n", totalPartidas);
    }
}

/* ═══════════════════════════════════════════════════════════
 *  FUNÇÃO: gravarArquivo  [DESAFIO BÔNUS]
 *  Grava todas as partidas em "copa.txt" no formato:
 *    Time1;Gols1;Time2;Gols2
 * ═══════════════════════════════════════════════════════════ */
void gravarArquivo(void) {
    if (totalPartidas == 0) {
        printf("\n[!] Nenhuma partida para gravar.\n");
        return;
    }

    FILE *arquivo = fopen("copa.txt", "w");
    if (arquivo == NULL) {
        printf("\n[!] Erro ao criar o arquivo copa.txt!\n");
        return;
    }

    for (int i = 0; i < totalPartidas; i++) {
        fprintf(arquivo, "%s;%d;%s;%d\n",
                time1[i], gols1[i], time2[i], gols2[i]);
    }

    fclose(arquivo);
    printf("\n[OK] %d partida(s) gravada(s) em copa.txt!\n", totalPartidas);
}

/* ═══════════════════════════════════════════════════════════
 *  FUNÇÃO PRINCIPAL
 * ═══════════════════════════════════════════════════════════ */
int main(void) {
    int opcao;

    printf("╔══════════════════════════════════╗\n");
    printf("║  SISTEMA DE PARTIDAS - COPA       ║\n");
    printf("╚══════════════════════════════════╝\n");

    /* Tenta carregar partidas salvas anteriormente */
    carregarArquivo();

    do {
        printf("\n===== MENU PRINCIPAL =====\n");
        printf("  1 - Cadastrar partida\n");
        printf("  2 - Listar partidas\n");
        printf("  3 - Estatísticas\n");
        printf("  4 - Encerrar\n");
        printf("Opção: ");

        if (scanf("%d", &opcao) != 1) {
            /* Limpa entrada inválida */
            while (getchar() != '\n');
            opcao = 0;
        }

        switch (opcao) {
            case 1: cadastrarPartida();   break;
            case 2: listarPartidas();     break;
            case 3: mostrarEstatisticas(); break;
            case 4:
                gravarArquivo();
                printf("\nAté logo!\n");
                break;
            default:
                printf("\n[!] Opção inválida! Escolha entre 1 e 4.\n");
        }

    } while (opcao != 4);

    return 0;
}