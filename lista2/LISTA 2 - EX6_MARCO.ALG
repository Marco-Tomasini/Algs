Algoritmo "LISTA 2 - EX6_MARCO"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 18/03/2026
Var
// Seção de Declarações das variáveis 

n1,n2,result: real
alt:inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   alt <- 0

   escreval("Digite um valor")
   leia(n1)
   escreval("Digite outro valor")
   leia(n2)
   
repita

      escreval("-- Qual operação deseja realizar: --")
      escreval("--     1) Adição --")
      escreval("--     2) Subtração --")
      escreval("--     3) Multiplicação --")
      escreval("--     4) Divisão --")
      escreval("-- OUTRO) sair --")
      leia(alt)
   
   
   escolha alt
           caso 1
                result <- n1+n2
                escreval("Soma: ", result)
                alt <- 0
           caso 2
                result <- n1-n2
                escreval("Subtração: ", result)
                alt <- 0
           caso 3
                result <- n1*n2
                escreval("Produto: ", result)
                alt <- 0
           caso 4
                result <- n1/n2
                escreval("Divisão: ", result)
                alt <- 0
           outrocaso
                escreval("-- Sistema Encerrando --")

   
   fimescolha

ate alt <> 0
Fimalgoritmo