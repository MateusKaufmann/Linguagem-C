#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese");
	char nome[100];
	char maior[100] = " n�o recebeu um aumento no sal�rio, pois este j� � maior que 500 reais.";
	char menor[100] = " recebeu um aumento de 30 porcento no seu sal�rio, que passa a ser:";
	float salario;
  	puts("Digite o nome da pessoa: ");	
	gets(nome);
	puts("Digite o sal�rio, em reais da pessoa: "); 
	scanf("%f", &salario);
	if(salario > 500) {
	
		printf (strcat (nome, maior));
	
	} else {
		salario = salario + ((salario/100)*30);
		printf (strcat (nome, menor));
		printf("%f", salario);
	}
	
	system("pause");
	
	
}

