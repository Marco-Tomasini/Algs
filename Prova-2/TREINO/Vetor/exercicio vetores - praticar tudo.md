Claro, mano. Usei a lista como base, que trabalha principalmente **vetores, leitura/preenchimento, contagem, substituição, média, posições, inversão e Fibonacci**. 

## Exercício 1 — C

Crie um programa em **C** que trabalhe com um vetor de inteiros.

O programa deve:

1. Perguntar ao usuário quantos valores deseja inserir no vetor.
2. Garantir que a quantidade seja maior que `0` e no máximo `50`.
3. Ler os valores do vetor.
4. Substituir todos os valores `0` por `1`.
5. Mostrar:

   * o vetor original após a substituição;
   * a quantidade de valores pares;
   * somente os valores positivos;
   * a média dos valores ímpares maiores que `10`;
   * a média geral do vetor;
   * todos os valores acima da média e suas posições;
   * a quantidade de valores acima da média;
   * a soma dos valores acima da média;
   * a porcentagem de valores acima da média em relação ao total.
6. Depois, inverter o vetor, trocando:

   * primeiro com último;
   * segundo com penúltimo;
   * e assim por diante.
7. Mostrar o vetor invertido.
8. Por fim, gerar outro vetor com os `N` primeiros elementos da sequência de Fibonacci, onde `N` também deve ser informado pelo usuário e não pode passar de `50`.

### O que esse exercício treina

Esse exercício mistura praticamente tudo da lista:

```text
vetor com tamanho definido pelo usuário
validação de entrada
leitura de vetor
substituição de valores
contagem de pares
exibição condicional
média com condição
média geral
comparação com a média
posição dos elementos
soma
porcentagem
inversão de vetor
Fibonacci em vetor
```

---

## Exercício 2 — VisualG30

Crie um algoritmo em **VisualG30** que trabalhe com dois vetores de inteiros.

O algoritmo deve:

1. Perguntar ao usuário a quantidade de elementos dos vetores.
2. Garantir que a quantidade seja maior que `0` e no máximo `30`.
3. Ler dois vetores `A` e `B` com essa quantidade de elementos.
4. Criar um terceiro vetor `C`, onde cada posição será a multiplicação dos elementos de mesmo índice:

```text
C[i] = A[i] * B[i]
```

5. No vetor `C`, substituir todos os valores `0` por `1`.
6. Mostrar o vetor `C`.
7. Calcular e mostrar:

   * quantos valores pares existem em `C`;
   * quais valores de `C` são positivos;
   * a média de todos os valores de `C`;
   * quais valores estão acima da média e suas posições;
   * a quantidade de valores acima da média;
   * a soma dos valores acima da média;
   * a porcentagem dos valores acima da média.
8. Depois, inverter o vetor `C`.
9. Mostrar o vetor `C` invertido.

### O que esse exercício treina

Esse aqui é bom para VisualG porque junta:

```text
dois vetores de entrada
terceiro vetor resultante
multiplicação por índice
substituição de zero por um
contagem
média
posição
porcentagem
inversão de vetor
estrutura para/fimpara
estrutura se/fimse
```

## Diferença entre os dois

O de **C** é mais completo porque inclui também **Fibonacci** e tamanho até `50`.

O de **VisualG30** é mais focado em **lógica de vetores**, principalmente usando dois vetores e criando um terceiro, que é uma parte bem importante da lista.
