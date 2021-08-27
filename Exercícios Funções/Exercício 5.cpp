#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int item (int cod, int quant) {
	float valor;
	switch (cod){
			case 100:
				valor += quant * 11;
				break;
			case 101:
				valor += quant * 13;
				break;
			case 102:
				valor += quant * 15;
				break;
			case 103:
				valor += quant * 11;
				break;
			case 104:
				valor += quant * 13;
				break;
			case 105:
				valor += quant * 3;
				break;
			default: 
				printf("\n Código Inválido");
		}	
		return valor;
}


int main() {
	setlocale(LC_ALL, "Portuguese");
	int cod = 0; 
	int quant;
	float valor, vfinal, tpedidos;
	char acao = 'a';	
	while (acao != 'e') {
	fflush(stdin);
	printf("\n");
	puts("Escolha uma opção: ");
	puts("A - Novo pedido");
	puts("B - incluir novo item e quantidade");
	puts("C - Fechar pedido e Imprimir Total");
	puts("D - Total do dia");
	puts("E - Sair do programa");	
	scanf("%c", &acao);
		
	if(acao == 'a') {
		vfinal = 0;
		puts("Bem vindo! Você está realizando um novo pedido."); 
		acao = 'b';
	} 
	
	if (acao == 'b'){
		puts("\n \n \n Digite o código do lanche a ser pedido, conforme a tabela abaixo: ");
		puts("   Código   |   Nome do Lanche   |   Preço   ");	
		puts("    100     |  Cachorro Quente   |   R$11.00  ");
		puts("    101     |  Bauru Simples     |   R$13.00  ");
		puts("    102     |  Bauru com Ovo     |   R$15.00  ");
		puts("    103     |  Hambúrguer        |   R$11.00  ");
		puts("    104     |  Cheeseburguer     |   R$13.00  ");
		puts("    105     |  Refrigerante      |   R$3.00  ");
		scanf("%d", &cod);
		puts("Digite a quantidade desejada do produto");
		scanf("%d", &quant);
		valor = item(cod,quant);
		vfinal += valor;
		printf("\n O valor dos itens pedidos, no momento, foi de %f", valor);
		printf("\n O valor total do pedido, até agora, está em %f", vfinal);
	} else if (acao == 'c'){
		tpedidos += vfinal;
		printf("Pedido fechado no valor de %f", vfinal);
		vfinal = 0;
	} else if (acao == 'd') {
		printf("O total vendido no dia, até o momento, é de %f", tpedidos);
	}
	}
	
	puts("Obrigado por utilizar este programa!");
	
	
	system("pause");
	
	
}

