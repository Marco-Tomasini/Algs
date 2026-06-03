algoritmo "LISTA 7 - ex04_marco"

funcao primo(numero: inteiro): logico
var
   i: inteiro
   ehPrimo: logico
inicio
   ehPrimo <- verdadeiro

   se numero < 2 entao
      ehPrimo <- falso
   senao
      i <- 2

      enquanto i * i <= numero faca
         se numero mod i = 0 entao
            ehPrimo <- falso
         fimse

         i <- i + 1
      fimenquanto
   fimse

   retorne ehPrimo
fimfuncao

var
   k, n, numero, encontrados: inteiro

inicio
   encontrados <- 0

   escreva("Digite o valor de k: ")
   leia(k)

   escreva("Digite a quantidade n de primos: ")
   leia(n)

   se n <= 0 entao
      escreval("Quantidade invalida.")
   senao
      escreval("Os ", n, " primeiros numeros primos acima de ", k, " sao:")

      numero <- k + 1

      enquanto encontrados < n faca
         se primo(numero) = verdadeiro entao
            escreva(numero)

            encontrados <- encontrados + 1

            se encontrados < n entao
               escreva(", ")
            fimse
         fimse

         numero <- numero + 1
      fimenquanto

      escreval("")
   fimse

fimalgoritmo