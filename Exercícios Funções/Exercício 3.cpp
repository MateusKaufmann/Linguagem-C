#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int soma (int a, int b) {
	puts("\n Somando os n�meros, aguarde...");
	return a+b;
}

int produto (int a, int b) {
	puts("\n Multiplicando os n�meros, aguarde...");
	return a*b;
}

int razao (int a, int b) {
	puts("\n Dividindo os n�meros, aguarde...");
	return a/b;
}

int subtracao (int a, int b) {
	puts("\n Subtraindo os n�meros, aguarde...");
	return a-b;
}


int main() {
setlocale(LC_ALL, "Portuguese");
int a, b, resultado;
char op;
puts("\n Digite o primeiro n�mero");
scanf("%d", &a);
puts("\n Digite o segundo n�mero");
scanf("%d", &b);
puts("\n Digite c�digo correspondente � opera��o desejada, conforme a tabela abaixo:");
puts("\n C�digo  |   Opera��o   ");
puts("\n a       |   Somar os n�meros   ");
puts("\n b       |   Multiplicar os n�meros   ");
puts("\n c       |   Dividir os n�meros   ");
puts("\n d       |   Subtrair os n�meros   ");
puts("\n Digite:");
scanf("%c", &op);

switch (op){
			case 'a':
				resultado = soma(a,b);
				printf("\n A soma dos valores � %d", resultado);
				break;
			case 'b':
				resultado = produto(a,b);
				printf("\n A multiplica��o dos valores � %d", resultado);
				break;
			case 'c':
				resultado = razao(a,b);
				printf("\n A divis�o dos valores � %d", resultado);
				break;
			case 'd':
				resultado = subtracao(a,b);
				printf("\n A subtra��o dos valores � %d", resultado);
				break;
			default: 
				printf("C�digo Inv�lido"); 
		}
system("pause");
	
}

