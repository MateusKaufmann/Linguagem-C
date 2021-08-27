#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese");
	int cod;
	float salAtual, salFinal, aumento;	
	puts("Digite o c�digo do cargo do funcion�rio, conforme a tabela abaixo: ");
	puts("   C�digo   |   Nome da fun��o   |   Aumento salarial   ");	
	puts("     1      |   Escritu�rio      |   30%  ");
	puts("     2      |   Secret�rio       |   25%  ");
	puts("     3      |   Caixa            |   20%  ");
	puts("     4      |   Gerente          |   10%  ");
	puts("     5      |   Diretor          |   0%  ");
	scanf("%d", &cod);
	puts("Tudo bem. Agora, digite o sal�rio atual do funcion�rio, em reais: ");
	scanf("%f", &salAtual);
	
		switch (cod){
			case 1:
				aumento = ((salAtual/100)*30);
				salFinal = salAtual + aumento;
				printf("Resumo da opera��o: ");
				printf("\n   Cargo selecionado   |   Sal�rio atual   |   Aumento             |  Sal�rio Final ");	
				printf("\n   Escritu�rio         |   R$: %f       |   R$:%f       |  R$: %f  ", salAtual, aumento, salFinal);
				break;
			case 2:
				aumento = ((salAtual/100)*25);
				salFinal = salAtual + aumento;
				printf("Resumo da opera��o: ");
				printf("\n   Cargo selecionado   |   Sal�rio atual         |   Aumento             |  Sal�rio Final ");	
				printf("\n   Secret�rio          |   R$: %f       |   R$:%f       |  R$: %f  ", salAtual, aumento, salFinal);
				break;
			case 3:
				aumento = ((salAtual/100)*20);
				salFinal = salAtual + aumento;
				printf("Resumo da opera��o: ");
				printf("\n   Cargo selecionado   |   Sal�rio atual         |   Aumento             |  Sal�rio Final ");	
				printf("\n   Caixa               |   R$: %f       |   R$:%f       |  R$: %f  ", salAtual, aumento, salFinal);
				break;
			case 4:
				aumento = ((salAtual/100)*10);
				salFinal = salAtual + aumento;
				printf("Resumo da opera��o: ");
				printf("\n   Cargo selecionado   |   Sal�rio atual         |   Aumento             |  Sal�rio Final ");	
				printf("\n   Gerente             |   R$: %f       |   R$:%f       |  R$: %f  ", salAtual, aumento, salFinal);
				break;
			case 5:
				aumento = ((salAtual/100)*0);
				salFinal = salAtual + aumento;
				printf("Resumo da opera��o: ");
				printf("\n   Cargo selecionado   |   Sal�rio atual         |   Aumento             |  Sal�rio Final ");	
				printf("\n   Diretor             |   R$: %f       |   R$:%f        |  R$: %f  ", salAtual, aumento, salFinal);
				break;
			default: 
				printf("C�digo Inv�lido"); 
		}
	
	system("pause");
	
	
}

