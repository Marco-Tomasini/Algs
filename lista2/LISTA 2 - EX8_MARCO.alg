algoritmo "LISTA 2 - EX8_MARCO"
var
   salario, novoSalario, aumento : real
inicio
   escreva("Digite o salario atual (R$): ")
   leia(salario)

   se salario <= 400 entao
      aumento <- salario * 0.15
   senao
   
      se salario <= 700 entao
         aumento <- salario * 0.12
      senao
      
         se salario <= 1000 entao
            aumento <- salario * 0.10
         senao
         
            se salario <= 1800 entao
               aumento <- salario * 0.07
            senao
            
               se salario <= 2500 entao
                  aumento <- salario * 0.04
               senao
               
                  aumento <- 0
   fimse
   fimse
   fimse
   fimse
   fimse

   novoSalario <- salario + aumento

   escreval("Salario atual:  R$ ", salario:10:2)
   escreval("Valor do aumento: R$ ", aumento:10:2)
   escreval("Novo salario:   R$ ", novoSalario:10:2)

fimalgoritmo
