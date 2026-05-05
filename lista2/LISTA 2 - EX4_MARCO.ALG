Algoritmo "LISTA 2    - EX4_MARCO"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 17/03/2026
Var
// Seção de Declarações das variáveis 
n: vetor[0..4] de real
i: inteiro
media: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   para i de 0 ate 3 faca
        escreval("Digite uma nota:")
        leia(n[i])
        media <- media + n[i]
   fimpara
   
   media <- media/4
   
   SE media >= 7 ENTAO
      escreval("Passou sem exame")
   SENAO
      escreval("Qual sua nota de exame?")
      leia(n[i+1])
      media <- media + n[i+1]
      
      media <- media/5
      SE media >= 5 ENTAO
         escreval("Passou com exame")
      SENAO
         escreval("REPROVADO")
      FIMSE
   FIMSE
   




Fimalgoritmo