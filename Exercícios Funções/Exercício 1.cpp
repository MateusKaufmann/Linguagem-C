#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int quadrado (int num) {
	puts("Aguarde...");
	return num*num;
}


int main() {
setlocale(LC_ALL, "Portuguese");
int num;
puts("Digite um n�mero");
scanf("%d", &num);
int resultado = quadrado(num);
printf("\n O n�mero digitado foi o %d, que elevado ao quadrado � igual a %d", num, resultado);
system("pause");
	
}

