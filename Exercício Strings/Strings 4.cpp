#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese");
	char nome[100];
	float salario, cod;
  	puts("Ol�! Digite seu nome: ");	
  	gets(nome);
	puts("Digite seu sal�rio atual");	
	scanf("%f", &salario);
	puts("Digite seu cargo de funcion�rio, conforme a tabela abaixo: ");
	puts("   C�digo   |   Cargo   ");	
	puts("      1     |Escritu�rio");
	puts("      2     | Secret�rio");
	puts("      3     |   Caixa   ");
	puts("      4     |  Gerente  ");
	puts("      5     |  Diretor  ");
	scanf("%f", &cod);
	if (cod == 1 || cod == 2 || cod == 3 || cod == 4 || cod == 5) {
		if (cod == 1) {
		salario = salario + ((salario/100)*30);
		printf("\n Nome do funcion�rio: %s", nome);
		printf("\n Cargo:'Escritu�rio'. O aumento salarial � de 30 porcento e o novo sal�rio fica em %f", salario);
		} else if (cod == 2) {
		salario = salario + ((salario/100)*25);
		printf("\n Nome do funcion�rio: %s", nome);
		printf("\n Cargo: 'Secret�rio'. O aumento salarial � de 25 porcento e o novo sal�rio fica em %f", salario);
		} else if (cod == 3) {
		salario = salario + ((salario/100)*20);
		printf("\n Nome do funcion�rio: %s", nome);
		printf("\n Cargo: 'Caixa'. O aumento salarial � de 20 porcento e o novo sal�rio fica em %f", salario);
		} else if (cod == 4) {
		salario = salario + ((salario/100)*10);
		printf("\n Nome do funcion�rio: %s", nome);
		printf("\n Cargo: 'Gerente'. O aumento salarial � de 10 porcento e o novo sal�rio fica em %f", salario);
		} else if (cod == 5) {
		salario = salario + ((salario/100)*1);
		printf("\n Nome do funcion�rio: %s", nome);
		printf("\n Cargo: 'Diretor'. O aumento salarial � de 1 porcento e o novo sal�rio fica em %f", salario);
		}
	} else {
		puts("C�digo Inv�lido!");
		
	}
	system("pause");
	
	
}

