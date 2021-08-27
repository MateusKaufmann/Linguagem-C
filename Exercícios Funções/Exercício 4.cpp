#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int soma (int a, int b) {
	puts("\n Digite o primeiro número");
	scanf("%d", &a);
	puts("\n Digite o segundo número");
	scanf("%d", &b);
	puts("\n Somando os números, aguarde...");
	return a+b;
}

int produto (int a, int b) {
	puts("\n Digite o primeiro número (base)");
	scanf("%d", &a);
	puts("\n Digite o segundo número (multiplicador)");
	scanf("%d", &b);
	puts("\n Multiplicando os números, aguarde...");
	return a*b;
}

int razao (int a, int b) {
	puts("\n Digite o primeiro número (base)");
	scanf("%d", &a);
	puts("\n Digite o segundo número (divisor)");
	scanf("%d", &b);
	puts("\n Dividindo os números, aguarde...");
	return a/b;
}

int subtracao (int a, int b) {
	puts("\n Digite o primeiro número");
	scanf("%d", &a);
	puts("\n Digite o segundo número");
	scanf("%d", &b);
	puts("\n Multiplicando os números, aguarde...");
	return a-b;
}

int fatorial (int a) {
	puts("\n Digite o número a ser fatorado");
	scanf("%d", &a);
	puts("\n Fatorando o número, aguarde...");
	int result = 1;
    while (a > 1) {
    	result *= a;
    	a--;
	}
    return result;
}

int potencia (int a, int b) {
	puts("\n Digite o primeiro número (base)");
	scanf("%d", &a);
	puts("\n Digite o segundo número (expoente)");
	scanf("%d", &b);
	puts("\n Calculando a potência dos números, aguarde...");
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
puts("\n Digite código correspondente à operação desejada, conforme a tabela abaixo:");
puts("\n Código  |   Operação   ");
puts("\n a       |   Somar os números   ");
puts("\n b       |   Multiplicar os números   ");
puts("\n c       |   Dividir os números   ");
puts("\n d       |   Subtrair os números   ");
puts("\n e       |   Fatorar número   ");
puts("\n f       |   Potência de números   ");
puts("\n g       |   Sair   ");
puts("\n Digite:");
scanf("%c", &op);

switch (op){
			case 'a':
				resultado = soma(a,b);
				printf("\n A soma dos valores é %d", resultado);
				break;
			case 'b':
				resultado = subtracao(a,b);
				printf("\n A subtração dos valores é %d", resultado);
				break;
			case 'c':
				resultado = razao(a,b);
				printf("\n A divisão dos valores é %d", resultado);
				break;
			case 'd':
				resultado = produto(a,b);
				printf("\n A multiplicação dos valores é %d", resultado);
				break;
			case 'e':
				resultado = fatorial(a);
				printf("\n O fatorial do número é %d", resultado);
				break;
			case 'f':
				resultado = potencia(a, b);
				printf("\n A potência dos números é %d", resultado);
				break;
			case 'g':
				break;
			default: 
				printf("Código Inválido"); 
		}
system("pause");
	
}

