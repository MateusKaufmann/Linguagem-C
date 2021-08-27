#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese");
	int cod;
	float salAtual, salFinal, aumento;	
	puts("Digite o código do cargo do funcionário, conforme a tabela abaixo: ");
	puts("   Código   |   Nome da função   |   Aumento salarial   ");	
	puts("     1      |   Escrituário      |   30%  ");
	puts("     2      |   Secretário       |   25%  ");
	puts("     3      |   Caixa            |   20%  ");
	puts("     4      |   Gerente          |   10%  ");
	puts("     5      |   Diretor          |   0%  ");
	scanf("%d", &cod);
	puts("Tudo bem. Agora, digite o salário atual do funcionário, em reais: ");
	scanf("%f", &salAtual);
	
		switch (cod){
			case 1:
				aumento = ((salAtual/100)*30);
				salFinal = salAtual + aumento;
				printf("Resumo da operação: ");
				printf("\n   Cargo selecionado   |   Salário atual   |   Aumento             |  Salário Final ");	
				printf("\n   Escrituário         |   R$: %f       |   R$:%f       |  R$: %f  ", salAtual, aumento, salFinal);
				break;
			case 2:
				aumento = ((salAtual/100)*25);
				salFinal = salAtual + aumento;
				printf("Resumo da operação: ");
				printf("\n   Cargo selecionado   |   Salário atual         |   Aumento             |  Salário Final ");	
				printf("\n   Secretário          |   R$: %f       |   R$:%f       |  R$: %f  ", salAtual, aumento, salFinal);
				break;
			case 3:
				aumento = ((salAtual/100)*20);
				salFinal = salAtual + aumento;
				printf("Resumo da operação: ");
				printf("\n   Cargo selecionado   |   Salário atual         |   Aumento             |  Salário Final ");	
				printf("\n   Caixa               |   R$: %f       |   R$:%f       |  R$: %f  ", salAtual, aumento, salFinal);
				break;
			case 4:
				aumento = ((salAtual/100)*10);
				salFinal = salAtual + aumento;
				printf("Resumo da operação: ");
				printf("\n   Cargo selecionado   |   Salário atual         |   Aumento             |  Salário Final ");	
				printf("\n   Gerente             |   R$: %f       |   R$:%f       |  R$: %f  ", salAtual, aumento, salFinal);
				break;
			case 5:
				aumento = ((salAtual/100)*0);
				salFinal = salAtual + aumento;
				printf("Resumo da operação: ");
				printf("\n   Cargo selecionado   |   Salário atual         |   Aumento             |  Salário Final ");	
				printf("\n   Diretor             |   R$: %f       |   R$:%f        |  R$: %f  ", salAtual, aumento, salFinal);
				break;
			default: 
				printf("Código Inválido"); 
		}
	
	system("pause");
	
	
}

