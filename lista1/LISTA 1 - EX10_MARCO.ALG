Algoritmo "Lista 1 - ex10_Marco"

Var
   valor_digitado: real
   i, n50, n20, n10, n5, n2, n1, s: inteiro

Inicio
      escreval("Escreva o valor em reais (EX: 197.50): ")
      leia(valor_digitado)

      i <- Int(valor_digitado)

      s <- Int((valor_digitado - i) * 100)

      n50 <- i \ 50
      i <- i MOD 50

      n20 <- i \ 20
      i <- i MOD 20

      n10 <- i \ 10
      i <- i MOD 10

      n5 <- i \ 5
      i <- i MOD 5

      n2 <- i \ 2
      i <- i MOD 2

      n1 <- i \ 1

      escreval(n50, " notas de 50")
      escreval(n20, " notas de 20")
      escreval(n10, " notas de 10")
      escreval(n5,  " notas de 5")
      escreval(n2,  " notas de 2")
      escreval(n1,  " moedas de 1")
      escreval("Sobrando ", s, " centavos")

Fimalgoritmo