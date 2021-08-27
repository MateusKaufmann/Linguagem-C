#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int soma (int a, int b) {
	puts("\n Digite o primeiro n�mero");
	scanf("%d", &a);
	puts("\n Digite o segundo n�mero");
	scanf("%d", &b);
	puts("\n Somando os n�meros, aguarde...");
	return a+b;
}

int produto (int a, int b) {
	puts("\n Digite o primeiro n�mero (base)");
	scanf("%d", &a);
	puts("\n Digite o segundo n�mero (multiplicador)");
	scanf("%d", &b);
	puts("\n Multiplicando os n�meros, aguarde...");
	return a*b;
}

int razao (int a, int b) {
	puts("\n Digite o primeiro n�mero (base)");
	scanf("%d", &a);
	puts("\n Digite o segundo n�mero (divisor)");
	scanf("%d", &b);
	puts("\n Dividindo os n�meros, aguarde...");
	return a/b;
}

int subtracao (int a, int b) {
	puts("\n Digite o primeiro n�mero");
	scanf("%d", &a);
	puts("\n Digite o segundo n�mero");
	scanf("%d", &b);
	puts("\n Multiplicando os n�meros, aguarde...");
	return a-b;
}

int fatorial (int a) {
	puts("\n Digite o n�mero a ser fatorado");
	scanf("%d", &a);
	puts("\n Fatorando o n�mero, aguarde...");
	int result = 1;
    while (a > 1) {
    	result *= a;
    	a--;
	}
    return result;
}

int potencia (int a, int b) {
	puts("\n Digite o primeiro n�mero (base)");
	scanf("%d", &a);
	puts("\n Digite o segundo n�mero (expoente)");
	scanf("%d", &b);
	puts("\n Calculando a pot�ncia dos n�meros, aguarde...");
	int result = 1;
    while (b >= 1) {
    	result *= a;
    	b--;
	}
    return result;
}




int main() {
setlocale(LC_ALL, "Portuguese");
int a, b, resultado;
char op;
puts("\n Digite c�digo correspondente � opera��o desejada, conforme a tabela abaixo:");
puts("\n C�digo  |   Opera��o   ");
puts("\n a       |   Somar os n�meros   ");
puts("\n b       |   Multiplicar os n�meros   ");
puts("\n c       |   Dividir os n�meros   ");
puts("\n d       |   Subtrair os n�meros   ");
puts("\n e       |   Fatorar n�mero   ");
puts("\n f       |   Pot�ncia de n�meros   ");
puts("\n g       |   Sair   ");
puts("\n Digite:");
scanf("%c", &op);

switch (op){
			case 'a':
				resultado = soma(a,b);
				printf("\n A soma dos valores � %d", resultado);
				break;
			case 'b':
				resultado = subtracao(a,b);
				printf("\n A subtra��o dos valores � %d", resultado);
				break;
			case 'c':
				resultado = razao(a,b);
				printf("\n A divis�o dos valores � %d", resultado);
				break;
			case 'd':
				resultado = produto(a,b);
				printf("\n A multiplica��o dos valores � %d", resultado);
				break;
			case 'e':
				resultado = fatorial(a);
				printf("\n O fatorial do n�mero � %d", resultado);
				break;
			case 'f':
				resultado = potencia(a, b);
				printf("\n A pot�ncia dos n�meros � %d", resultado);
				break;
			case 'g':
				break;
			default: 
				printf("C�digo Inv�lido"); 
		}
system("pause");
	
}

