#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese");
	int cod, quant;
	float valor;	
	puts("Digite o código do lanche a ser pedido, conforme a tabela abaixo: ");
	puts("   Código   |   Nome do Lanche   |   Preço   ");	
	puts("    100     |  Cachorro Quente   |   R$5.00  ");
	puts("    101     |  Bauru Simples     |   R$6.00  ");
	puts("    102     |  Bauru com Ovo     |   R$8.00  ");
	puts("    103     |  Hambúrguer        |   R$5.00  ");
	puts("    104     |  Cheeseburguer     |   R$7.50  ");
	puts("    105     |  Refrigerante      |   R$2.00  ");
	scanf("%d", &cod);
	if (cod == 100 || cod == 101 || cod == 102 || cod == 103 || cod == 104 || cod == 105) {
		puts("Qual a quantidade? ");	
		scanf("%d", &quant);
		
		if (cod == 100) {
		valor = quant * 5;
		printf("\n Detalhes do Pedido:");
		printf ("%d", quant);
		printf(" Unidades de Cachorro Quente");
		printf("\n Total: R$: %f", valor);
		} else if (cod == 101) {
		valor = quant * 6;
		printf("\n Detalhes do Pedido:");
		printf ("%d", quant);
		printf(" Unidades de Bauru Simples");
		printf("\n Total: R$: %f", valor);
		} else if (cod == 102) {
		valor = quant * 8;
		printf("\n Detalhes do Pedido:");
		printf ("%d", quant);
		printf(" Unidades de Bauru com Ovo");
		printf("\n Total: R$: %f", valor);
		} else if (cod == 103) {
		valor = quant * 5;
		printf("\n Detalhes do Pedido:");
		printf ("%d", quant);
		printf(" Unidades de Hambúrguer");
		printf("\n Total: R$: %f", valor);
		} else if (cod == 104) {
		valor = quant * 7.5;
		printf("\n Detalhes do Pedido:");
		printf ("%d", quant);
		printf(" Unidades de Cheeseburguer");
		printf("\n Total: R$: %f", valor);
		} else if (cod == 105) {
		valor = quant * 2;
		printf("\n Detalhes do Pedido:");
		printf ("%d", quant);
		printf(" Unidades de Refrigerante");
		printf("\n Total: R$: %f", valor);
		} 
	} else {
		puts("Código Inválido!");
		
	}
	system("pause");
	
	
}

