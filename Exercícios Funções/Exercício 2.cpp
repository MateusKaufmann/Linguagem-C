#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int soma (int a, int b, int c) {
	puts("\n Somando os n�meros, aguarde...");
	return a+b+c;
}

int produto (int a, int b, int c) {
	puts("\n Multiplicando os n�meros, aguarde...");
	return a*b*c;
}


int main() {
setlocale(LC_ALL, "Portuguese");
char a, b, c, resultado;
puts("\n Digite o primeiro n�mero");
scanf("%c", &a);
puts("\n Digite o segundo n�mero");
scanf("%c", &b);
puts("\n Digite o terceiro n�mero");
scanf("%c", &c);
system("pause");
	
}

