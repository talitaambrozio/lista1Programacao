/*
As maçãs custam R$ 1,30 cada se forem compradas menos de uma dúzia, e R$
1,00 se forem compradas pelo menos 12. Escreva um programa que leia o
número de maçãs compradas, calcule e escreva o custo total da compra.*/
#include<stdio.h>
main(){
	int quantidade;
	float custoTotalCompra;
	printf("Informe a quantidade de macas: ");
	scanf("%d", &quantidade);
	if(quantidade < 12){
		custoTotalCompra = quantidade * 1.3;
		printf("Custo total da compra: %.2f", custoTotalCompra);
	}else{
		custoTotalCompra = quantidade * 1.0;
		printf("Custo total da compra: %.2f", custoTotalCompra);
	}
}
