#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese");
	int cep;	
	puts("Informe o primeiro dígito do CEP: ");
	scanf("%d", &cep);
	
		switch (cep){
			case 0:
				printf("Enviar para: Sudeste (SP, RJ, ES, MG)");
				break;
			case 1:
				printf("Enviar para: Sudeste (SP, RJ, ES, MG)");
				break;
			case 2:
				printf("Enviar para: Sudeste (SP, RJ, ES, MG)");
				break;
			case 3:
				printf("Enviar para: Sudeste (SP, RJ, ES, MG)");
				break;
			case 4:
				printf("Enviar para: Região 4 (BA, SE)");
				break;
			case 5:
				printf("Enviar para: Região 5 (PE, AL, PB, RN)");
				break;
			case 6:
				printf("Enviar para: Região 6 (CE, PI, MA, PA, AP, AM, RR, AC )");
				break;
			case 7:
				printf("Enviar para: Região 7 (DF, GO, TO, MT, RO, MS)");
				break;
			case 8:
				printf("Enviar para: Sul (PR, SC, RS)");
				break;
			case 9:
				printf("Enviar para: Sul (PR, SC, RS)");
				break;
			default: 
				printf("Dígito Inválido"); 
		}
	
	system("pause");
	
	
}

