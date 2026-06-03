algoritmo "LISTA 6 - ex03_marco"

var
   matriz: vetor[1..5, 1..5] de inteiro
   i, j: inteiro
   somaL4, somaC2: inteiro
   somaDiagonalP, somaDiagonalS: inteiro
   somaTotal: inteiro

inicio
   somaL4 <- 0
   somaC2 <- 0
   somaDiagonalP <- 0
   somaDiagonalS <- 0
   somaTotal <- 0

   para i de 1 ate 5 faca
      para j de 1 ate 5 faca
         escreva("Digite o valor da posicao [", i, "][", j, "]: ")
         leia(matriz[i, j])
      fimpara
   fimpara

   para i de 1 ate 5 faca
      para j de 1 ate 5 faca
         somaTotal <- somaTotal + matriz[i, j]

         se i = 4 entao
            somaL4 <- somaL4 + matriz[i, j]
         fimse

         se j = 2 entao
            somaC2 <- somaC2 + matriz[i, j]
         fimse

         se i = j entao
            somaDiagonalP <- somaDiagonalP + matriz[i, j]
         fimse

         se i + j = 6 entao
            somaDiagonalS <- somaDiagonalS + matriz[i, j]
         fimse
      fimpara
   fimpara

   escreval("")
   escreval("Matriz:")

   para i de 1 ate 5 faca
      para j de 1 ate 5 faca
         escreva(matriz[i, j], " ")
      fimpara
      escreval("")
   fimpara

   escreval("")
   escreval("Soma da linha 4: ", somaL4)
   escreval("Soma da coluna 2: ", somaC2)
   escreval("Soma da diagonal principal: ", somaDiagonalP)
   escreval("Soma da diagonal secundaria: ", somaDiagonalS)
   escreval("Soma de todos os elementos: ", somaTotal)

fimalgoritmo