//Fa�a um algoritmo para ler dois n�meros inteiros e informar se estes s�o iguais ou diferentes.
#include<stdio.h>
main(){
	int n1, n2;
	printf("Digite o valor do primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o valor do segundo numero: ");
	scanf("%d", &n2);
	if(n1==n2){
		printf("Os numeros sao iguais.");
	}else{
		printf("Os numeros sao diferentes");
	}
	
}

