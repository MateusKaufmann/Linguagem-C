#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, result;
	char operacao;	
	puts("Digite a operação a ser executada, conforme a tabela abaixo: ");
	puts(" código (símbolo) |   Operação");	
	puts("        +         |   Soma");
	puts("        -         |   Subtração");
	puts("        /         |   Divisão");
	puts("        *         |   Multiplicação");
	scanf("%c", &operacao);
	puts("Agora, digite o primeiro número para realizar a operação");
	scanf("%d", &n1);
	puts("Certo! Digite o segundo número para realizar a operação");
	scanf("%d", &n2);
	
		switch (operacao){
			case '+':
				result = n1 + n2;
				printf("Resultado: %d", result);
				break;
			case '-':
				result = n1 - n2;
				printf("Resultado: %d", result);
				break;
			case '/':
				result = n1 / n2;
				printf("Resultado: %d", result);
				break;
			case '*':
				result = n1 * n2;
				printf("Resultado: %d", result);
				break;
			default: 
				printf("Operação Inválida."); 
		}
	
	system("pause");
	
	
}

