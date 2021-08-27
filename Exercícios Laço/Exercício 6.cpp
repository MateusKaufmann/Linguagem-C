#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
setlocale(LC_ALL, "Portuguese");
int elefantes;
int contador = 1;
int contador2 = 1;
int nIncomoda, nIncomodam = 0;

puts("Digite o número de elefantes: ");
scanf("%d", &elefantes);

if (elefantes > 0) {
	while(contador <= elefantes) {
	if (contador == elefantes) {
		
		 while (contador > 1) {
		 	if (contador == 2) {
			printf("\n %d", contador);
			printf(" elefantes ");
			printf("incomodam ");
			nIncomoda++;
			printf("muita gente ");
			printf("\n %d", contador-1);
			printf(" elefante ");
			contador2 = 1; 
			while(contador2 <= contador-1) {
				printf("incomoda, ");
				nIncomodam++;
				contador2++;
			}
			printf("muito menos");
		} else {
			printf("\n %d", contador);
			printf(" elefantes ");
			printf("incomodam ");
			nIncomodam++;
			printf("muita gente");
			printf("\n %d", contador-1);
			printf(" elefantes ");
			contador2 = 1;
			while(contador2 <= contador-1) {
				printf("incomodam, ");
				nIncomodam++;
				contador2++;
			}
			printf("muito menos");
		}
		contador--;
		 }
		 break;
		 
		
	} else {
		if (contador == 1) {
			printf(" %d", contador);
			printf(" elefante ");
			printf(" incomoda ");
			nIncomoda++;
			printf(" muita gente ");
			printf("\n %d", contador+1);
			printf(" elefantes ");
			contador2 = 1; 
			while(contador2 <= contador+1) {
				printf("incomodam, ");
				nIncomodam++;
				contador2++;
			}
			printf("muito mais");
		} else {
			printf("\n %d", contador);
			printf(" elefantes ");
			printf("incomodam ");
			nIncomodam++;
			printf("muita gente");
			printf("\n %d", contador+1);
			printf(" elefantes ");
			contador2 = 1;
			while(contador2 <= contador+1) {
				printf("incomodam, ");
				nIncomodam++;
				contador2++;
			}
			printf(" muito mais");
		}
	}
		
		
		
	

contador++;
}
}
 else {
	printf("\n Número inválido");
}
	system("pause");
	
	
}

