Algoritmo "Lista 1 - ex6_Marco"

Var
   t, nulo, branco, val: real

Inicio
      escreval("Qual o nº de votos validos?")
      leia(val)
      escreval("Qual o n° de votos em branco?")
      leia(branco)
      escreval("Qual o n° de votos nulos?")
      leia(nulo)

      t <- nulo + branco + val

      val <- (val / t) * 100
      branco <- (branco / t) * 100
      nulo <- (nulo / t) * 100


      escreval("Total de votos: ", t)
      escreval("Porcentagem de válidos: ", val, "%")
      escreval("Porcentagem de brancos: ", branco, "%")
      escreval("Porcentagem de nulos: ", nulo, "%")

Fimalgoritmo