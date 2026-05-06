Algoritmo "Medias_Aritmetica_Harmonica"

Var
   n, i, valor: inteiro
   soma_arit, soma_harm: real

Inicio
   i <- 0
   soma_arit <- 0
   soma_harm <- 0

   Escreva("Quantos valores deseja digitar? ")
   Leia(n)

   Enquanto i < n faca
      Escreva("Digite um valor inteiro e positivo: ")
      Leia(valor)

      Se valor > 0 entao
         soma_arit <- soma_arit + valor
         soma_harm <- soma_harm + (1 / valor)
         i <- i + 1
      Senao
         Escreval("Valor invalido!")
      FimSe
   FimEnquanto

   Se n > 0 entao
      Escreval("Media Aritmetica = ", soma_arit / n)
      Escreval("Media Harmonica = ", n / soma_harm)
   FimSe

FimAlgoritmo