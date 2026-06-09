algoritmo "Exercício 2 — VisualG30"

var
  a,b,c,ci: vetor [0..4] de inteiro
  i, pares:inteiro

inicio
  pares <- 0

  para i de 0 ate 4 faca
    escreval("Digite o Valor ", i+1, " do vetor A")
    leia (a[i])
  fimpara

  para i de 0 ate 4 faca
    escreval("Digite o Valor ", i+1, " do vetor B")
    leia (b[i])
  fimpara

  para i de 0 ate 4 faca
    c[i] <- a[i] * b[i]

    se (c[i] mod 2 = 0) entao
      pares <- pares + 1
    fimse
  fimpara

  escreval("Vetor c: ")

  para i de 0 ate 4 faca
    escreva(c[i])

    se (i<4) entao
      escreva(", ")
    fimse
  fimpara
  escreval("")
  escreval("Quantidade de pares: ", pares)
  escreval("Vetor c invertido: ")

  para i de 0 ate 4 faca
    ci[i] <- c[4 - i]

    escreva(ci[i])

    se (i<4) entao
      escreva(", ")
    fimse
  fimpara




fimalgoritmo
