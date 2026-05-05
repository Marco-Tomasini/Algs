algoritmo "LISTA 2 - EX10_MARCO"
var
   a, b, c, delta, x1, x2 : real
inicio
   escreva("Digite a: ")
   leia(a)
   escreva("Digite b: ")
   leia(b)
   escreva("Digite c: ")
   leia(c)

   se a = 0 entao
      escreval("Erro: a equação não é de 2° grau (a = 0)!")
      
   senao
      delta <- (b * b) - (4 * a * c)

      se delta >= 0 entao
         x1 <- (-b + raizq(delta)) / (2 * a)
         x2 <- (-b - raizq(delta)) / (2 * a)
         escreval("Delta = ", delta:10:4)
         escreval("X1 = ", x1:10:4)
         escreval("X2 = ", x2:10:4)
         
      senao
      
         escreval("Delta = ", delta:10:4)
         escreval("Nao ha raizes reais (delta negativo).")
         fimse
         fimse

fimalgoritmo
