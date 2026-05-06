Algoritmo "Serie_Fibonacci"

Var
   fibonacci: vetor[0..49] de inteiro
   n, i: inteiro

Inicio

   Repita
      Escreva("Digite a quantidade de elementos da serie de Fibonacci (1 a 50): ")
      Leia(n)

      Se (n < 1) ou (n > 50) entao
         Escreval("Valor invalido. Digite um numero entre 1 e 50.")
      FimSe
   Ate (n >= 1) e (n <= 50)

   Se n >= 1 entao
      fibonacci[0] <- 1
   FimSe

   Se n >= 2 entao
      fibonacci[1] <- 1
   FimSe

   Para i de 2 ate n - 1 faca
      fibonacci[i] <- fibonacci[i - 1] + fibonacci[i - 2]
   FimPara

   Escreval("Serie de Fibonacci:")

   Para i de 0 ate n - 1 faca
      Escreva(fibonacci[i], " ")
   FimPara

FimAlgoritmo