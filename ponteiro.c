//PONTEIRO

#include <stdio.h>
#include <locale.h>


void trocaValor(int*ponteiro){

	
	*ponteiro=20;	
	
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int valor;
	
	printf("\nDigite o valor: ");
	scanf("%i", &valor);
	
	printf("\nO endere�o de mem�ria de valor:%d", &valor);
	printf("\nconte�do ANTIGO de valor1 �: %d\n", valor);
	
	trocaValor(&valor);
	
	printf("\nO endere�o de mem�ria de valor:%d", &valor);
	printf("\nconte�do ATUAL de valor1 �: %d\n", valor);
	
	return 0;
}
