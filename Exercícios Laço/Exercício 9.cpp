#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese");
	int cod = 1; 
	int nulos, brancos, z, h, l = 0;
	
	while(cod != 0) {
		
	puts("\n \n Digite o c�digo do candidato para votar: ");
	puts("   C�digo   |   Nome do Candidato   ");	
	puts("     1      |   Zezinho             ");
	puts("     2      |   Huguinho            ");
	puts("     3      |   Luizinho            ");
	puts("     4      |   Voto em branco      ");
	puts("     5      |   Voto nulo           ");
	scanf("%d", &cod);
	
		switch (cod){
			case 1:
				printf("Voc� votou em Zezinho. ");
				z += 1;
				break;
			case 2:
				printf("Voc� votou em Huguinho. ");
				h += 1;
				break;
			case 3:
				printf("Voc� votou em Luizinho. ");
				l += 1;
				break;
			case 4:
				printf("Voc� votou Branco. ");
				brancos += 1;
				break;
			case 5:
				printf("Voc� votou Nulo. ");
				nulos += 1;
				break;
			case 0:
				break;
			default: 
				printf("\n C�digo Inv�lido");
				break;
		}	
		
	}
	puts("\n \n Resultados: ");
	puts("\n   C�digo   |   Nome do Candidato   |   Quantidade de votos");	
	printf("\n     1      |   Zezinho             |   %d", z);
	printf("\n     2      |   Huguinho            |   %d", h);
	printf("\n     3      |   Luizinho            |   %d", l);
	printf("\n     4      |   Voto em branco      |   %d", brancos);
	printf("\n     5      |   Voto nulo           |   %d", nulos);
	if (nulos > brancos && nulos > z && nulos > h && nulos > l) {
		printf("\n Os votos vencedores s�o os Nulos.");
	} else if (brancos > nulos && brancos > z && brancos > h && brancos > l) {
		printf("\n Os votos vencedores s�o os Brancos.");
	} else if (z > brancos && z > nulos && z > h && z > l) {
		printf("\n Os votos vencedores s�o os do Zezinho.");
	} else if (h > brancos && h > z && h > nulos && h > l) {
		printf("\n Os votos vencedores s�o os do Huguinho.");
	} else if (l > brancos && l > z && l > h && l > nulos) {
		printf("\n Os votos vencedores s�o os do Luizinho.");
	}
	
	
	
	system("pause");
	
	
}

