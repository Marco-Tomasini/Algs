algoritmo "LISTA 6 - ex05_marco"

var
   A, B, C: vetor[1..3, 1..2] de inteiro
   i, j: inteiro

inicio
   escreval("Digite os valores da matriz A:")

   para i de 1 ate 3 faca
      para j de 1 ate 2 faca
         escreva("A[", i, "][", j, "]: ")
         leia(A[i, j])
      fimpara
   fimpara

   escreval("")
   escreval("Digite os valores da matriz B:")

   para i de 1 ate 3 faca
      para j de 1 ate 2 faca
         escreva("B[", i, "][", j, "]: ")
         leia(B[i, j])
      fimpara
   fimpara

   para i de 1 ate 3 faca
      para j de 1 ate 2 faca
         se i <= j entao
            C[i, j] <- A[i, j]
         senao
            C[i, j] <- B[i, j]
         fimse
      fimpara
   fimpara

   escreval("")
   escreval("Matriz C:")

   para i de 1 ate 3 faca
      para j de 1 ate 2 faca
         escreva(C[i, j], " ")
      fimpara
      escreval("")
   fimpara

fimalgoritmo