#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese");
	char nome[100];
	char maior[100] = " é maior de idade.";
	char menor[100] = " é menor de idade.";
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
		printf("\n Não há espaço na variável para que o código seja completamente executado");
	}
	
	system("pause");
	
	
}

