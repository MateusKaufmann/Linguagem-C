#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese");
	char nome[100];
	float salario, cod;
  	puts("Olá! Digite seu nome: ");	
  	gets(nome);
	puts("Digite seu salário atual");	
	scanf("%f", &salario);
	puts("Digite seu cargo de funcionário, conforme a tabela abaixo: ");
	puts("   Código   |   Cargo   ");	
	puts("      1     |Escrituário");
	puts("      2     | Secretário");
	puts("      3     |   Caixa   ");
	puts("      4     |  Gerente  ");
	puts("      5     |  Diretor  ");
	scanf("%f", &cod);
	if (cod == 1 || cod == 2 || cod == 3 || cod == 4 || cod == 5) {
		if (cod == 1) {
		salario = salario + ((salario/100)*30);
		printf("\n Nome do funcionário: %s", nome);
		printf("\n Cargo:'Escrituário'. O aumento salarial é de 30 porcento e o novo salário fica em %f", salario);
		} else if (cod == 2) {
		salario = salario + ((salario/100)*25);
		printf("\n Nome do funcionário: %s", nome);
		printf("\n Cargo: 'Secretário'. O aumento salarial é de 25 porcento e o novo salário fica em %f", salario);
		} else if (cod == 3) {
		salario = salario + ((salario/100)*20);
		printf("\n Nome do funcionário: %s", nome);
		printf("\n Cargo: 'Caixa'. O aumento salarial é de 20 porcento e o novo salário fica em %f", salario);
		} else if (cod == 4) {
		salario = salario + ((salario/100)*10);
		printf("\n Nome do funcionário: %s", nome);
		printf("\n Cargo: 'Gerente'. O aumento salarial é de 10 porcento e o novo salário fica em %f", salario);
		} else if (cod == 5) {
		salario = salario + ((salario/100)*1);
		printf("\n Nome do funcionário: %s", nome);
		printf("\n Cargo: 'Diretor'. O aumento salarial é de 1 porcento e o novo salário fica em %f", salario);
		}
	} else {
		puts("Código Inválido!");
		
	}
	system("pause");
	
	
}

