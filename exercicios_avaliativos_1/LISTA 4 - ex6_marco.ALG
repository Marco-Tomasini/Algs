Algoritmo "Lista 4 - ex6_Marco"

Var
   qtd, termo, j, expoente, sinal: inteiro
   x, seno, potencia, fatorial: real

Inicio

   Escreva("Digite o valor de x em radianos: ")
   Leia(x)

   Escreva("Digite a quantidade de termos da serie: ")
   Leia(qtd)

   seno <- 0

   Para termo de 0 ate qtd - 1 faca

      expoente <- 2 * termo + 1

      potencia <- 1
      Para j de 1 ate expoente faca
         potencia <- potencia * x
      FimPara

      fatorial <- 1
      Para j de 1 ate expoente faca
         fatorial <- fatorial * j
      FimPara

      Se termo mod 2 = 0 entao
         sinal <- 1
      Senao
         sinal <- -1
      FimSe

      seno <- seno + sinal * (potencia / fatorial)

   FimPara

   Escreval("Valor aproximado do seno de ", x, " = ", seno)

FimAlgoritmo