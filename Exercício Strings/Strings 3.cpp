#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese");
	float p1, p2, t, media, faltas;
  	puts("Ol�! Digite a nota da prova 1: ");	
	scanf("%f", &p1);
	puts("Digite a nota da prova 2: ");	
	scanf("%f", &p2);
	puts("Digite a nota do trabalho: ");	
	scanf("%f", &t);
	puts("Quantas foram as faltas do aluno? ");	
	scanf("%f", &faltas);
	media = (p1+p2+t)/3;
	if (faltas >= 5) {
		puts("\nConceito E (5 ou mais faltas)"); 
		puts("\nSitua��o: Reprovado");
	} else {
		if (media >= 8) {
		printf("\n Conceito A (8.0 a 10.0). Voc� tirou %f", media);
		puts("\nSitua��o: Aprovado");
		} else if (media >= 7) {
		printf("\n Conceito B (7.0 a 7.9). Voc� tirou %f", media);
		puts("\nSitua��o: Aprovado");
		} else if (media >= 6) {
		printf("\n Conceito C (6.0 a 6.9). Voc� tirou %f", media);
		puts("\nSitua��o: Reprovado");
		} else if (media >= 0) {
		printf("\n Conceito D (0.0 a 5.9). Voc� tirou %f", media);
		puts("\nSitua��o: Reprovado");
		}
	}
	system("pause");
	
	
}

