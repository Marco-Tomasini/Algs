#include <stdio.h>

int main(){

int i,j, apr=0,rep=0,rec=0;
float n1,n2,n3,m_aluno=0,m_menor=0,m_maior=0,m_geral=0;

printf("Quantos alunos tem na turma?");
scanf("%d", &j);

for(i=1;i <= j; i++){
	printf("\n\nDigite a nota 1 do aluno %d \n", i);
	scanf("%f", &n1);
	printf("Digite a nota 2 do aluno %d \n", i);
	scanf("%f", &n2);
	printf("Digite a nota 3 do aluno %d \n", i);
	scanf("%f", &n3);

	m_aluno = (n1+n2+n3)/3;
	m_geral += m_aluno;

	if(m_aluno >= 7){
		printf("Aluno %d aprovado com média %.2f \n", i, m_aluno);
		apr++;
	}

	if(m_aluno >= 5 && m_aluno < 7){
		printf("Aluno %d em recuperação com média %.2f \n", i, m_aluno);
		rec++;
	}

	if(m_aluno < 5){
		printf("Aluno %d reprovado com média %.2f \n", i, m_aluno);
		rep++;
	}

	if(i == 1){
            m_maior = m_aluno;
            m_menor = m_aluno;
    }

	if(m_aluno > m_maior){
		m_maior = m_aluno;
	}

	if(m_aluno < m_menor){
		m_menor = m_aluno;
	} 
}

m_geral = m_geral/j;

printf("\n Resultados: \n");
printf("Aprovados: %d \n", apr);
printf("Recuperação: %d \n", rec);
printf("Reprovados: %d \n", rep);
printf("Media Geral: %.2f \n", m_geral);
printf("Maior média: %.2f \n", m_maior);
printf("Menor média: %.2f \n", m_menor);


return 0;
}