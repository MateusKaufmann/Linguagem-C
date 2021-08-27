#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
setlocale(LC_ALL, "Portuguese");
int meses = 24;
int contador;
float valor = 0;

for(contador = 1; contador <= meses; contador++){
  valor = ((valor/100)*0.5) + valor;
  valor = valor + 100;
  printf("\n O valor com juros e depósito no mês %d foi de: %f", contador, valor);
}

	system("pause");
	
	
}

