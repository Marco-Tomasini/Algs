Algoritmo "Lista 1 - ex8_Marco"



Var
   w,l,c,area,quant,lpmq: real


Inicio

      escreval("Qual a potencia em Watts da luz?")
      leia(w)
      escreval("Qual o comprimento em metros do comodo?")
      leia(c)
      escreval("Qual a largura em metros do comodo?")
      leia(l)
      
      area <- c*l
      lpmq<- 18/w
      quant<- area*lpmq
      
      escreval("a quantidade de lâmpadas necessárias é de: ", quant)



Fimalgoritmo