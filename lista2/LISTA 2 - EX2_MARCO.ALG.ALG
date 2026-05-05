Algoritmo "LISTA 2    - EX2_MARCO"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 17/03/2026
Var
// Seção de Declarações das variáveis 
sexo: caractere
alt, ideal: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreval("Digite seu sexo (h para homem e m para mulher)")
   leia(sexo)
   escreval("Digite sua altura (ex:1.73)")
   leia(alt)
   
   SE (sexo = "h") entao
        ideal <- (72.7 * alt) - 58
        escreval("seu peso ideal é: ", ideal)
   SENAO
        SE (sexo = "m") entao
         ideal <- (62.1 * alt) - 44.7
          escreval("seu peso ideal é: ", ideal)
        senao
          escreval("você escolheu um sexo inválido")
   FIMSE
        FIMSE




Fimalgoritmo