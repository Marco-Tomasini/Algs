algoritmo "LISTA 2 - EX5_MARCO"
var
   valor : inteiro
   n50, n20, n10, n5, n2, n1 : inteiro
inicio
   escreva("Digite o valor em reais (inteiro): ")
   leia(valor)

   n50 <- valor div 50
   valor <- valor mod 50

   n20 <- valor div 20
   valor <- valor mod 20

   n10 <- valor div 10
   valor <- valor mod 10

   n5 <- valor div 5
   valor <- valor mod 5

   n2 <- valor div 2
   valor <- valor mod 2

   n1 <- valor

   escreval("Cedulas/moedas utilizadas:")

   se n50 <> 0 entao
      escreval(n50, " nota(s) de R$ 50")
   fimse

   se n20 <> 0 entao
      escreval(n20, " nota(s) de R$ 20")
   fimse

   se n10 <> 0 entao
      escreval(n10, " nota(s) de R$ 10")
   fimse

   se n5 <> 0 entao
      escreval(n5, " nota(s) de R$ 5")
   fimse

   se n2 <> 0 entao
      escreval(n2, " nota(s) de R$ 2")
   fimse

   se n1 <> 0 entao
      escreval(n1, " moeda(s) de R$ 1")
   fimse

fimalgoritmo
