#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
setlocale(LC_ALL, "Portuguese");
int elefantes;
int contador = 1;

puts("Digite o n�mero de elefantes: ");
scanf("%d", &elefantes);

if (elefantes > 0) {
	while(contador <= elefantes) {
	if (contador == elefantes) {
		if (contador == 1) {
			printf("\n %d", contador);
			printf("elefante se balan�ava, numa teia de aranha");
			printf("\n Mas como a teia n�o se arrebentou,");
			printf("\n Ele foi para o ch�o!");
		} else {
			printf("\n %d", contador);
			printf("elefantes se balan�avam, numa teia de aranha");
			printf("\n Mas como a teia n�o se arrebentou,");
			printf("\n Todos foram para o ch�o!");
		}
	} else if (contador == 1) {
		printf("\n %d", contador);
		printf("elefante se balan�ava, numa teia de aranha");
		printf("\n Mas como a teia n�o se arrebentou,");
		printf("\n Foi chamar outro elefante.");
	} else {
		printf("\n %d", contador);
		printf("elefantes se balan�avam, numa teia de aranha");
		printf("\n Mas como a teia n�o se arrebentou,");
		printf("\n Foram chamar outro elefante.");
	}
	contador++;
}
} else {
	printf("\n N�mero inv�lido");
}
	system("pause");
	
	
}

