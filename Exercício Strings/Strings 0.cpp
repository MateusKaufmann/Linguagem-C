#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese");
	char str1[15], str2[15];
	int sizeString1, sizeString2, length1, length2;
  	puts("Digite uma string: ");	
	gets(str1);
	puts("Digite mais uma string: "); 
	gets(str2); 
	sizeString1 = sizeof(str1);
	sizeString2 = sizeof(str2);
	length1 = strlen(str1);
	length2 = strlen(str2);
	printf ("\nTamanho da variável String 1, em bytes: %d", sizeString1);
	printf ("\nTamanho do conteúdo da String 1, em bytes: %d", length1);
	printf ("\nTamanho da variável String 2, em bytes: %d", sizeString2);
	printf ("\nTamanho do conteúdo da String 2, em bytes: %d", length2);
	if (sizeString1 > (length1 + length2)) {
		strcat (str1, str2);
		printf ("\nAs strings foram concatenadas. O resultado é: %s", str1);
	} else {
		printf ("\nAs strings não foram concatenadas, pois o espaço é insuficiente");
	}
	system("pause");
	
	
}

