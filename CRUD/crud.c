#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


char turma[111], diretorio[333], situacao[44];


struct Materia{
	long int matric;
	char nome[222];
	double np[6], nl[6], nt, nf;
	int faltas;
	char situation[44];
};
struct Materia ip;


void directory(){

	puts("Digite o nome da turma:");
	getchar();
	scanf("%[^\n]", turma);
	//const char *turmaF = turma;
	
	puts("Digite o diretório onde quer salvar o arquivo:");
	scanf("%[^\n]", diretorio);
	char *diretorio2 = strcat(diretorio, "/");
	diretorio = strcat(diretorio2, turma);
}


void passaste(double nf, int faltas){

	if(nf >= 6 && faltas < 32)
		strcpy(situacao, "Aprovado");
	else if(nf < 6 && faltas < 32)
		strcpy(situacao, "Reprovado por nota");
	else if(nf >= 6 && faltas >= 32)
		strcpy(situacao, "Reprovado por ausência");
	else
		strcpy(situacao, "Reprovado por ausência e por nota");
}


void cadastro(){

	directory();

	const char *diretorioF = diretorio;
	FILE *arquivo;
	arquivo = fopen(diretorioF, "ab");

	if(arquivo == NULL)
	{
		printf("Impossivel abrir/criar arquivo\n");
		exit(1);
	}
	
	while(1)
	{
		puts("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");	
		puts("Cadastrando um(a) aluno(a)...");
		
		puts("Digite a matricula (digite '0' para cancelar o cadastro):");
		scanf("%ld", &ip.matric);
		if(ip.matric == 0) 
			break;
		
		puts("Digite o nome:");
		getchar();
		scanf("%[^\n]", ip.nome);
		
		double ml=0, mp=0;
		for (int i = 0; i < 6; ++i)
		{
			printf("Digite a nota da prova %d (de 0 a 10):\n", i+1);
			scanf("%lf", &ip.np[i]);
			mp += ip.np[i];
		}
		for (int i = 0; i < 6; ++i)
		{
			printf("Digite a nota da lista %d (de 0 a 10):\n", i+1);
			scanf("%lf", &ip.nl[i]);
			ml += ip.nl[i];
		}
		
		puts("Digite a quantidade de faltas:");
		scanf("%d", &ip.faltas);
		
		puts("Digite a nota do Trabalho Final (de 0 a 10):");
		scanf("%lf", &ip.nt);
		
		ip.nf = ((mp/6.0) * 0.80) + ((ml/6.0) * 0.10) + (ip.nt * 0.10);
		
		passaste(ip.nf, ip.faltas);
		strcpy(ip.situation, situacao);
		
		fwrite(&ip, sizeof(ip), 1, arquivo);
	}
	
	fclose(arquivo);
}





void consulta(){

	long int bmatric=-1;

	while(1)
	{

		puts("Digite 'fim' para sair.");
		directory();
		const char *diretorioF = diretorio;
		if( (strcmp(turma, "fim")) == 0)
		{
			int fcloseall();
			main();
		}
		

		FILE *arquivo;
		arquivo = fopen(diretorioF, "rb");
		if(arquivo == NULL)
		{
			puts("Arquivo inexistente!");
			consulta();
		}
		
		while(1)
		{
			puts("\nDigite '0' para sair.\nDigite a matricula do aluno que deseja buscar:");
			scanf("%ld", &bmatric);
			if(bmatric == 0)
			{
				int fcloseall();
				main();
			}

			while (fread (&ip, sizeof(ip), 1, arquivo))
			{
				if(ip.matric == bmatric)
				{
					puts("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
					printf("Turma: %s\n", turma);
					printf("Matricula: %ld\n", ip.matric);
					printf("Nome: %s\n", ip.nome);
					for (int i = 0; i < 6; ++i)
					{
						printf("Nota da prova %d: %.2lf\n", i+1, ip.np[i]);
					}
					for (int i = 0; i < 6; ++i)
					{
						printf("Nota da lista %d: %.2lf\n", i+1, ip.nl[i]);
					}
					printf("Nota do Trabalho Final: %.2lf\n", ip.nt);
					printf("Nota final: %.2lf\n", ip.nf);
					printf("Numero de ausências: %d\n", ip.faltas);
					printf("Situação: %s\n", ip.situation);
					puts("\n\n");


				}
				else 
					continue;
			}
		}
		int fcloseall();
	}
}


void listagem(){

	while(1) 
	{

		puts("Digite 'fim' para sair.");
		directory();
		const char *diretorioF = diretorio;
		if( (strcmp(turma, "fim")) == 0) 
		{
			int fcloseall();
			main();
		}

		FILE *arquivo;
		arquivo = fopen(diretorioF, "rb");
		if(arquivo == NULL)
		{
			puts("Arquivo inexistente!\n");
			int fcloseall();
			listagem();
		}

		puts("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		while (fread (&ip, sizeof(ip), 1, arquivo))
		{
			printf("Turma: %s\n", turma);
			printf("Matricula: %ld\n", ip.matric);
			printf("Nome: %s\n", ip.nome);
			for (int i = 0; i < 6; ++i)
			{
				printf("Nota da prova %d: %.2lf\n", i+1, ip.np[i]);
			}
			for (int i = 0; i < 6; ++i)
			{
				printf("Nota da lista %d: %.2lf\n", i+1, ip.nl[i]);
			}
			printf("Nota do Trabalho Final: %.2lf\n", ip.nt);
			printf("Nota final: %.2lf\n", ip.nf);
			printf("Numero de ausências: %d\n", ip.faltas);
			printf("Situação: %s\n", ip.situation);
			puts("\n");
		}

		fclose(arquivo);
	}
}


void alteracao(){

	long int bmatric=-1;

	while(1)
	{

		puts("Digite 'fim' para sair.");
		directory();
		const char *diretorioF = diretorio;
		if( (strcmp(turma, "fim")) == 0)
		{
			int fcloseall();
			main();
		}
		

		FILE *arquivo;
		arquivo = fopen(diretorioF, "r+b");
		if(arquivo == NULL)
		{
			puts("Arquivo inexistente!");
			alteracao();
		}
		
		while(1)
		{
			puts("\nDigite '0' para sair.\nDigite a matricula do aluno que deseja atualizar os dados:");
			scanf("%ld", &bmatric);
			if(bmatric == 0)
			{
				int fcloseall();
				main();
			}

			while (fread (&ip, sizeof(ip), 1, arquivo))
			{
				if(ip.matric == bmatric)
				{
					puts("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
					printf("Turma: %s\n", turma);
					printf("Matricula: %ld\n", ip.matric);
					printf("Nome: %s\n", ip.nome);
					for (int i = 0; i < 6; ++i)
					{
						printf("Nota da prova %d: %.2lf\n", i+1, ip.np[i]);
					}
					for (int i = 0; i < 6; ++i)
					{
						printf("Nota da lista %d: %.2lf\n", i+1, ip.nl[i]);
					}
					printf("Nota do Trabalho Final: %.2lf\n", ip.nt);
					printf("Nota final: %.2lf\n", ip.nf);
					printf("Numero de ausências: %d\n", ip.faltas);
					printf("Situação: %s\n", ip.situation);
					puts("\n\n");

					puts("Entre com os novos dados:\n");
					double ml=0, mp=0;
					for (int i = 0; i < 6; ++i)
					{
						printf("Digite a nota da prova %d (de 0 a 10):\n", i+1);
						scanf("%lf", &ip.np[i]);
						mp += ip.np[i];
					}
					for (int i = 0; i < 6; ++i)
					{
						printf("Digite a nota da lista %d (de 0 a 10):\n", i+1);
						scanf("%lf", &ip.nl[i]);
						ml += ip.nl[i];
					}

					puts("Digite a quantidade de faltas:");
					scanf("%d", &ip.faltas);

					puts("Digite a nota do Trabalho Final (de 0 a 10):");
					scanf("%lf", &ip.nt);

					ip.nf = ((mp/6.0) * 0.80) + ((ml/6.0) * 0.10) + (ip.nt * 0.10);

					passaste(ip.nf, ip.faltas);
					strcpy(ip.situation, situacao);

					fseek(arquivo, -(sizeof(ip)), SEEK_CUR);
					fwrite(&ip, sizeof(ip), 1, arquivo);
				}
				else 
					continue;
			}
		}
		int fcloseall();
	}
}


int main(){
	setlocale(LC_ALL, "Portuguese");

	int token=-1;
	do
	{
		puts("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		puts("Welcome!");
		puts("1 para Cadastrar uma turma");
		puts("2 para Consultar um aluno");
		puts("3 para Alterar dados de um aluno");
		puts("4 para Listar dados de uma turma");
		puts("5 para Terminar a execução");

		scanf("%d", &token);

		if(token == 1) cadastro();
		if(token == 2) consulta();
		if(token == 3) alteracao();
		if(token == 4) listagem();
			
	} while(token != 5);
	
	return 0;
}

