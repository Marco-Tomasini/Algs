Algoritmo "LISTA 2    - EX3_MARCO"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 17/03/2026
Var
// Seção de Declarações das variáveis 
x, y: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreval("Digite um nº")
   leia(x)
   escreval("Digite outro nº")
   leia(y)
   
   SE (x>0)e(y>0)ENTAO
   escreval("Sua coordenada está no 1º quadrante")
   FIMSE
   
   SE (x>0)e(y<0)ENTAO
   escreval("Sua coordenada está no 4º quadrante")
   FIMSE
   
   SE (x<0)e(y>0)ENTAO
   escreval("Sua coordenada está no 2º quadrante")
   FIMSE
   
   SE (x<0)e(y<0)ENTAO
   escreval("Sua coordenada está no 3º quadrante")
   FIMSE
   
   SE (x=0)e(y=0)ENTAO
   escreval("Sua coordenada está na origem do plano")
   FIMSE




Fimalgoritmo