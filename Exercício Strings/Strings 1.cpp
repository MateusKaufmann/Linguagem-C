#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese");
	char nome[100];
	char maior[100] = " � maior de idade.";
	char menor[100] = " � menor de idade.";
	int idade;
  	puts("Digite o nome da pessoa: ");	
	gets(nome);
	puts("Digite a idade da pessoa: "); 
	scanf("%d", &idade);
	if(sizeof(nome) > (strlen(nome) + strlen(menor))) {
		if (idade >= 18) {
		printf (strcat (nome, maior));
	} else {
		printf (strcat (nome, menor));
	}
	} else {
		printf("\n N�o h� espa�o na vari�vel para que o c�digo seja completamente executado");
	}
	
	system("pause");
	
	
}

