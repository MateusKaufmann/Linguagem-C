#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char portugues (char turno) {
	char result;
	switch (turno){
			case 'm':
				result = 'Bom dia';
			case 't':	
				result = 'Boa tarde';
			case 'n':
				result = 'Boa noite';
		}
		return result;
}
char ingles (char turno) {
	char result;
	switch (turno){
			case 'm':
				result = 'Bom dia';
			case 't':	
				result = 'Boa tarde';
			case 'n':
				result = 'Boa noite';
		}
		return result;
}
char espanhol (char turno) {
	char result;
	switch (turno){
			case 'm':
				result = 'Bom dia';
			case 't':	
				result = 'Boa tarde';
			case 'n':
				result = 'Boa noite';
		}
		return result;
}
char italiano (char turno) {
	char result;
	switch (turno){
			case 'm':
				result = 'Bom dia';
			case 't':	
				result = 'Boa tarde';
			case 'n':
				result = 'Boa noite';
		}
		return result;
}
char alemao (char turno) {
	char result;
	switch (turno){
			case 'm':
				result = 'Bom dia';
			case 't':	
				result = 'Boa tarde';
			case 'n':
				result = 'Boa noite';
		}
		return result;
}





int main() {
setlocale(LC_ALL, "Portuguese");
int ling;
char turno;
char resultado;
puts("\n Digite código correspondente à lingua desejada, conforme a tabela abaixo:");
puts("\n Código  |   Operação   ");
puts("\n 1       |   Português   ");
puts("\n 2       |   Inglês   ");
puts("\n 3       |   Espanhol   ");
puts("\n 4       |   Italiano   ");
puts("\n 5       |   Alemão   ");
puts("\n Digite:");
scanf("%d", &ling);
puts("Ok, agora digite o turno desejado.");
fflush(stdin);
scanf("%c", &turno);

switch (ling){
			case 1:
				resultado = portugues(turno);
			case 2:	
				resultado = ingles(turno);
			case 3:
				resultado = espanhol(turno);
			case 4:
				resultado = italiano(turno);
			case 5: 
				resultado = alemao(turno);
			default:
				resultado = 'Código Inválido';
		}
printf("%s", resultado);
system("pause");
	
}

