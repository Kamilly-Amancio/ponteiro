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
	
	printf("\nO endereço de memória de valor:%d", &valor);
	printf("\nconteúdo ANTIGO de valor1 é: %d\n", valor);
	
	trocaValor(&valor);
	
	printf("\nO endereço de memória de valor:%d", &valor);
	printf("\nconteúdo ATUAL de valor1 é: %d\n", valor);
	
	return 0;
}
