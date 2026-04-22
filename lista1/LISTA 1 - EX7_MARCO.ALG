Algoritmo "Lista 1 - ex7_Marco"



Var
   bruto,liq,ir,inss,s: real


Inicio
      ir<-0.15
      inss<-0.11
      s<-0.03

      escreval("Qual seu salário bruto?")
      leia(bruto)
      
      liq <- bruto - ((bruto*ir)+(bruto*inss)+(bruto*s))
      
      escreval("seu salário líquido é de: ", liq)



Fimalgoritmo