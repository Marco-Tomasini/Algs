algoritmo "LISTA 7 - ex02_marco"

funcao maior_valor(a, b, c: inteiro): inteiro
var
   maior: inteiro
inicio
   maior <- a

   se b > maior entao
      maior <- b
   fimse

   se c > maior entao
      maior <- c
   fimse

   retorne maior
fimfuncao

var
   a, b, c, maior: inteiro

inicio
   escreva("Digite tres valores inteiros: ")
   leia(a, b, c)

   maior <- maior_valor(a, b, c)

   escreval("Maior valor: ", maior)

fimalgoritmo