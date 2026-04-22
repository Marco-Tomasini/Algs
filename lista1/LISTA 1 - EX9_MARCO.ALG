Algoritmo "Lista 1 - ex9_Marco"



Var
   i, j, h, m, s: inteiro


Inicio

      escreval("Escreva um tempo em segundos: ")
      leia(i)
      
      h <- i\3600
      j <- i MOD 3600
      i <- j
      
      m <- i\60
      j <- i MOD 60
      i <- j
      
      s <- i
      
      escreval("o tempo foi de ", h, " horas ",m, " minutos e ", s, " segundos")




Fimalgoritmo