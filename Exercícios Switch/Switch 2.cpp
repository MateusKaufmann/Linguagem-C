#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, result;
	char operacao;	
	puts("Digite a opera��o a ser executada, conforme a tabela abaixo: ");
	puts(" c�digo (s�mbolo) |   Opera��o");	
	puts("        +         |   Soma");
	puts("        -         |   Subtra��o");
	puts("        /         |   Divis�o");
	puts("        *         |   Multiplica��o");
	scanf("%c", &operacao);
	puts("Agora, digite o primeiro n�mero para realizar a opera��o");
	scanf("%d", &n1);
	puts("Certo! Digite o segundo n�mero para realizar a opera��o");
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
				printf("Opera��o Inv�lida."); 
		}
	
	system("pause");
	
	
}

