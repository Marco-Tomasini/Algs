#include <stdio.h>

   // Tabela de Filmes e Series:
   //
   // Tipo: 1 - Filme | 2 - Serie
   // Censura: 0 - Livre | 10 - 10 anos | 12 - 12 anos | 14 - 14 anos | 18 - 18 anos
   // Categoria: 1 - Acao | 2 - Comedia | 3 - Drama | 4 - Suspense/Ficcao | 5 - Romance
   // Fornecedor: 1 - Netflix | 2 - Amazon Prime | 3 - Disney+ | 4 - HBO Max
   //
   // Titulo                         | Tipo | Censura | Categoria | Fornecedor
   // -----------------------------------------------------------------------
   // Vingadores: Ultimato           | 1    | 12      | 1         | 3
   // Divertida Mente                | 1    | 0       | 2         | 3
   // Interestelar                   | 1    | 10      | 4         | 2
   // A Culpa e das Estrelas         | 1    | 12      | 5         | 4
   // John Wick                      | 1    | 18      | 1         | 2
   // Stranger Things                | 2    | 14      | 4         | 1
   // Friends                        | 2    | 10      | 2         | 4
   // The Last of Us                 | 2    | 18      | 3         | 4
   // La Casa de Papel               | 2    | 18      | 1         | 1
   // Anne with an E                 | 2    | 10      | 3         | 1



int main(){
    int SorM = 0, censura = 0, categoria = 0, fornecedor = 0, resultado = 0;

    printf("Voce quer assistir filme ou serie?\n");
    printf("1 - Filme\n");
    printf("2 - Serie\n");
    printf("Digite a opcao: ");
    scanf("%d", &SorM);

    printf("\n\n==============================================\n");
    printf("TITULOS PELO TIPO ESCOLHIDO\n");
    printf("==============================================\n\n");

    if(SorM == 1){
      printf("- Vingadores: Ultimato\n");
      printf("- Divertida Mente\n");
      printf("- Interestelar\n");
      printf("- A Culpa e das Estrelas\n");
      printf("- John Wick\n");

    } else if (SorM == 2){
      printf("- Stranger Things\n");
      printf("- Friends\n");
      printf("- The Last of Us\n");
      printf("- La Casa de Papel\n");
      printf("- Anne with an E\n");
    } else{
        printf("Opcao de tipo invalida.\n");
        return 0;
    }



    printf("\nVoce tem preferencia por censura??\n");
    printf("-1 - Sem preferencia\n");
    printf("0  - Livre\n");
    printf("10 - 10 anos\n");
    printf("12 - 12 anos\n");
    printf("14 - 14 anos\n");
    printf("18 - 18 anos\n");
    printf("Digite a opcao: ");
    scanf("%d", &censura);

    printf("\n\n==============================================\n");
    printf("TITULOS PELO TIPO ESCOLHIDO\n");
    printf("==============================================\n\n");

    if (SorM == 1 && (censura == -1 || censura == 12)){
        printf("- Vingadores: Ultimato\n");
        resultado = 1;
    }

    if (SorM == 1 && (censura == -1 || censura == 0)){
        printf("- Divertida Mente\n");
        resultado = 1;  
    }

    if (SorM == 1 && (censura == -1 || censura == 10)){
        printf("- Interestelar\n");
        resultado = 1;
    }

    if (SorM == 1 && (censura == -1 || censura == 12)){
        printf("- A Culpa e das Estrelas\n");
        resultado = 1;
    }

    if (SorM == 1 && (censura == -1 || censura == 18)){
        printf("- John Wick\n");
        resultado = 1;
    }

    if (SorM == 2 && (censura == -1 || censura == 14)){
        printf("- Stranger Things\n");
        resultado = 1;
    }

    if (SorM == 2 && (censura == -1 || censura == 10)){
        printf("- Friends\n");
        resultado = 1;
    }

    if (SorM == 2 && (censura == -1 || censura == 18)){
        printf("- The Last of Us\n");
        resultado = 1;
    }

    if (SorM == 2 && (censura == -1 || censura == 18)){
        printf("- La Casa de Papel\n");
        resultado = 1;
    }

    if (SorM == 2 && (censura == -1 || censura == 10)){
        printf("- Anne with an E\n");
        resultado = 1;
    }

    if (resultado == 0){
        printf("Nenhum titulo encontrado apos o filtro de censura.\n");
    }

    printf("\nVoce tem preferencia por categoria?\n");
    printf("0 - Sem preferencia\n");
    printf("1 - Acao\n");
    printf("2 - Comedia\n");
    printf("3 - Drama\n");
    printf("4 - Suspense/Ficcao\n");
    printf("5 - Romance\n");
    printf("Digite a opcao: ");
    scanf("%d", &categoria);

    printf("\n\n==============================================\n");
    printf("TITULOS APOS CATEGORIA ESCOLHIDA\n");
    printf("==============================================\n\n");

    resultado = 0;

    if (SorM == 1 && (censura == -1 || censura == 12) && (categoria == 0 || categoria == 1)){
        printf("- Vingadores: Ultimato\n");
        resultado = 1;
    }

    if (SorM == 1 && (censura == -1 || censura == 0) && (categoria == 0 || categoria == 2)){
        printf("- Divertida Mente\n");
        resultado = 1;
    }

    if (SorM == 1 && (censura == -1 || censura == 10) && (categoria == 0 || categoria == 4)){
        printf("- Interestelar\n");
        resultado = 1;
    }

    if (SorM == 1 && (censura == -1 || censura == 12) && (categoria == 0 || categoria == 5)){
        printf("- A Culpa e das Estrelas\n");
        resultado = 1;
    }

    if (SorM == 1 && (censura == -1 || censura == 18) && (categoria == 0 || categoria == 1)){
        printf("- John Wick\n");
        resultado = 1;
    }

    if (SorM == 2 && (censura == -1 || censura == 14) && (categoria == 0 || categoria == 4)){
        printf("- Stranger Things\n");
        resultado = 1;
    }

    if (SorM == 2 && (censura == -1 || censura == 10) && (categoria == 0 || categoria == 2)){
        printf("- Friends\n");
        resultado = 1;
    }

    if (SorM == 2 && (censura == -1 || censura == 18) && (categoria == 0 || categoria == 3)){
        printf("- The Last of Us\n");
        resultado = 1;
    }

    if (SorM == 2 && (censura == -1 || censura == 18) && (categoria == 0 || categoria == 1)){
        printf("- La Casa de Papel\n");
        resultado = 1;
    }

    if (SorM == 2 && (censura == -1 || censura == 10) && (categoria == 0 || categoria == 3)){
        printf("- Anne with an E\n");
        resultado = 1;
    }

    if (resultado == 0){
        printf("Nenhum titulo encontrado apos o filtro de categoria.\n");
    }

    printf("\nVoce tem preferencia por fornecedor?\n");
    printf("0 - Sem preferencia\n");
    printf("1 - Netflix\n");
    printf("2 - Amazon Prime\n");
    printf("3 - Disney+\n");
    printf("4 - HBO Max\n");
    printf("Digite a opcao: ");
    scanf("%d", &fornecedor);

    printf("\n\n==============================================\n");
    printf("RESULTADO FINAL DA RECOMENDACAO\n");
    printf("==============================================\n\n");

    resultado = 0;

    if (SorM == 1 && (censura == -1 || censura == 12) && (categoria == 0 || categoria == 1) && (fornecedor == 0 || fornecedor == 3)){
        printf("- Vingadores: Ultimato\n");
        printf("  Tipo: Filme | Censura: 12 anos | Categoria: Acao | Fornecedor: Disney+\n");
        resultado = 1;
    }

    if (SorM == 1 && (censura == -1 || censura == 0) && (categoria == 0 || categoria == 2) && (fornecedor == 0 || fornecedor == 3)){
        printf("- Divertida Mente\n");
        printf("  Tipo: Filme | Censura: Livre | Categoria: Comedia | Fornecedor: Disney+\n");
        resultado = 1;
    }

    if (SorM == 1 && (censura == -1 || censura == 10) && (categoria == 0 || categoria == 4) && (fornecedor == 0 || fornecedor == 2)){
        printf("- Interestelar\n");
        printf("  Tipo: Filme | Censura: 10 anos | Categoria: Suspense/Ficcao | Fornecedor: Amazon Prime\n");
        resultado = 1;
    }

    if (SorM == 1 && (censura == -1 || censura == 12) && (categoria == 0 || categoria == 5) && (fornecedor == 0 || fornecedor == 4)){
        printf("- A Culpa e das Estrelas\n");
        printf("  Tipo: Filme | Censura: 12 anos | Categoria: Romance | Fornecedor: HBO Max\n");
        resultado = 1;
    }

    if (SorM == 1 && (censura == -1 || censura == 18) && (categoria == 0 || categoria == 1) && (fornecedor == 0 || fornecedor == 2)){
        printf("- John Wick\n");
        printf("  Tipo: Filme | Censura: 18 anos | Categoria: Acao | Fornecedor: Amazon Prime\n");
        resultado = 1;
    }

    if (SorM == 2 && (censura == -1 || censura == 14) && (categoria == 0 || categoria == 4) && (fornecedor == 0 || fornecedor == 1)){
        printf("- Stranger Things\n");
        printf("  Tipo: Serie | Censura: 14 anos | Categoria: Suspense/Ficcao | Fornecedor: Netflix\n");
        resultado = 1;
    }

    if (SorM == 2 && (censura == -1 || censura == 10) && (categoria == 0 || categoria == 2) && (fornecedor == 0 || fornecedor == 4)){
        printf("- Friends\n");
        printf("  Tipo: Serie | Censura: 10 anos | Categoria: Comedia | Fornecedor: HBO Max\n");
        resultado = 1;
    }

    if (SorM == 2 && (censura == -1 || censura == 18) && (categoria == 0 || categoria == 3) && (fornecedor == 0 || fornecedor == 4)){
        printf("- The Last of Us\n");
        printf("  Tipo: Serie | Censura: 18 anos | Categoria: Drama | Fornecedor: HBO Max\n");
        resultado = 1;
    }

    if (SorM == 2 && (censura == -1 || censura == 18) && (categoria == 0 || categoria == 1) && (fornecedor == 0 || fornecedor == 1)){
        printf("- La Casa de Papel\n");
        printf("  Tipo: Serie | Censura: 18 anos | Categoria: Acao | Fornecedor: Netflix\n");
        resultado = 1;
    }

    if (SorM == 2 && (censura == -1 || censura == 10) && (categoria == 0 || categoria == 3) && (fornecedor == 0 || fornecedor == 1)){
        printf("- Anne with an E\n");
        printf("  Tipo: Serie | Censura: 10 anos | Categoria: Drama | Fornecedor: Netflix\n");
        resultado = 1;
    }

    if (resultado == 0){
        printf("Nenhum titulo foi encontrado com esses criterios.\n");
    }

    printf("\nFim do programa.\n");

    return 0;
}