algoritmo "LISTA 2 - EX7_MARCO"
var
   a, b, resto : inteiro
inicio
   escreva("Digite o primeiro numero inteiro: ")
   leia(a)
   escreva("Digite o segundo numero inteiro: ")
   leia(b)

   resto <- a mod b

   se resto = 1 entao
      escreval("Soma das variaveis mais o resto: ", a + b + resto)
   fimse

   se resto = 2 entao
      se (a mod 2 = 0) e (b mod 2 = 0) entao
         escreval("Ambos os valores sao PARES")
      senao
         se (a mod 2 <> 0) e (b mod 2 <> 0) entao
            escreval("Ambos os valores sao IMPARES")
         senao
            escreval("Os valores sao diferentes: um par e um impar")
         fimse
      fimse
   fimse

   se resto = 3 entao
      escreval("Multiplicacao da soma pelo primeiro: ", (a + b) * a)
   fimse

   se resto = 4 entao
      se b <> 0 entao
         escreval("Divisao da soma pelo segundo: ", (a + b) / b)
      senao
         escreval("Erro: divisao por zero!")
      fimse
   fimse

   se (resto <> 1) e (resto <> 2) e (resto <> 3) e (resto <> 4) entao
      escreval("Quadrado de A: ", a * a)
      escreval("Quadrado de B: ", b * b)
   fimse

fimalgoritmo
