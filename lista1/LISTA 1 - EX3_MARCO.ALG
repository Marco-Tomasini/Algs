Algoritmo "Lista 1 - ex3_Marco"



Var
   horas, valor, sal: real
   nome :caractere


Inicio
      escreval("Qual o nome do funcionário?")
      leia(nome)
      escreval("Horas trabalhadas:")
      leia(horas)
      escreval("valor recebido por hora:")
      leia(valor)
      
      sal <- valor*horas
      
      escreval("O salário do(a) ", nome, " foi de", sal, " Reais")



Fimalgoritmo