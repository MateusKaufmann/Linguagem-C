#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese");
	int cod, quant;
	float vfinal;	
	puts("Digite o c�digo do lanche a ser pedido, conforme a tabela abaixo: ");
	puts("   C�digo   |   Nome do Lanche   |   Pre�o   ");	
	puts("    100     |  Cachorro Quente   |   R$10.00  ");
	puts("    101     |  Bauru Simples     |   R$13.00  ");
	puts("    102     |  Bauru com Ovo     |   R$16.00  ");
	puts("    103     |  Hamb�rguer        |   R$14.00  ");
	puts("    104     |  Cheeseburguer     |   R$16.00  ");
	puts("    105     |  Refrigerante      |   R$4.00  ");
	scanf("%d", &cod);
	puts("Digite a quantidade desejada do produto");
	scanf("%d", &quant);
	
		switch (cod){
			case 100:
				vfinal = quant * 10;
				printf("Resumo do pedido: ");
				printf("\n   Quantidade   |   Nome do Lanche   |   Pre�o   ");	
				printf("\n    	%d       |  Cachorro Quente   |   R$: %f  ", quant, vfinal);
				break;
			case 101:
				vfinal = quant * 13;
				printf("Resumo do pedido: ");
				printf("\n   Quantidade   |   Nome do Lanche   |   Pre�o   ");	
				printf("\n    	%d       |  Bauru Simples     |   R$: %f  ", quant, vfinal);
				break;
			case 102:
				vfinal = quant * 16;
				printf("Resumo do pedido: ");
				printf("\n   Quantidade   |   Nome do Lanche   |   Pre�o   ");	
				printf("\n    	%d       |  Bauru com Ovo     |   R$: %f  ", quant, vfinal);
				break;
			case 103:
				vfinal = quant * 14;
				printf("Resumo do pedido: ");
				printf("\n   Quantidade   |   Nome do Lanche   |   Pre�o   ");	
				printf("\n    	%d       |  Hamb�rguer        |   R$: %f  ", quant, vfinal);
				break;
			case 104:
				vfinal = quant * 16;
				printf("Resumo do pedido: ");
				printf("\n   Quantidade   |   Nome do Lanche   |   Pre�o   ");	
				printf("\n    	%d       |  Cheeseburguer     |   R$: %f  ", quant, vfinal);
				break;
			case 105:
				vfinal = quant * 4;
				printf("Resumo do pedido: ");
				printf("\n   Quantidade   |   Nome do Lanche   |   Pre�o   ");	
				printf("\n    	%d       |  Refrigerante      |   R$: %f  ", quant, vfinal);
				break;
			default: 
				printf("C�digo Inv�lido"); 
		}
	
	system("pause");
	
	
}

