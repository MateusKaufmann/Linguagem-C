#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
setlocale(LC_ALL, "Portuguese");
int numero = 20;
int contador = 1;

while(contador <= numero) {
	if(contador%3 == 0) {
		printf("%d", contador);
	}
	contador++;
}
	system("pause");
	
	
}

