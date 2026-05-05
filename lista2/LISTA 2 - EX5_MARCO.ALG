Algoritmo "LISTA 2 - EX5_MARCO"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 18/03/2026
Var
// Seção de Declarações das variáveis 
n, m: vetor[0..4] de real
i: inteiro
media: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
    PARA i de 0 ate 4 faca
         escreval("Escreva uma nota")
         LEIA(n[i])
         media <- media + n[i]
    FIMPARA
    
    media <- media/5

   PARA i de 0 ate 4 faca
        SE n[i] > media ENTAO
           m[i] <- n[i]
        
        FIMSE
   FIMPARA
   
   ESCREVAL("Os valores acima da média são: ")
   
   PARA i de 0 ate 4 faca
        SE m[i]>0 ENTAO
           ESCREVA(m[i])
        FIMSE
   FIMPARA

Fimalgoritmo