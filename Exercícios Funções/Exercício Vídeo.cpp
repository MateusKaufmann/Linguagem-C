#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main() {
	
setlocale(LC_ALL, "Portuguese");
int num, result;
printf("\n Exercício número 69. Aluno: Mateus Kaufmann. ");
printf("\n ..............................................");
printf("\n Digite um número, diferente de zero: ");
printf("\n >");
while (num != 0) {
	scanf("%d", &num);
	if (num == 0) {
		printf("\n Você digitou 0. O processo foi finalizado e o resultado da multiplicação dos números inteiros positivos é %d", result);
		printf("\n");
		break;
	} else {
		if (num %2 == 0) {
			if (result == 0) {
				result = num;
			} else {
				result = result*num;
			}
			
		} 
		printf("\n Você digitou %d. Digite mais um número ou digite 0 para finalizar o processo.", num);
		printf("\n >");
	}
}
system("pause");
	
}

