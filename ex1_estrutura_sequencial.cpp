//1. Fazer um algoritmo que leia um número inteiro e escreva o seu antecessor e o seu sucessor.

#include<stdio.h>
main(){
	int n;
	printf("Digite um numero inteiro: ");
	scanf("%d", &n);
	printf("Numero digitado: %d", n);
	printf("\nAntecessor: %d", (n-1));
	printf("\nSucessor: %d", (n+1));
	
}
