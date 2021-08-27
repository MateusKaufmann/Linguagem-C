#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
setlocale(LC_ALL, "Portuguese");
int numero = 20;
int contador;

for(contador = numero; contador > 0; contador--){
  if(contador%2 ==1){
    printf("%d", contador);
}
}
	system("pause");
	
	
}

