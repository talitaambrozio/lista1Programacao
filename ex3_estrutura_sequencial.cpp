/*
3. O custo de um carro novo ao consumidor é a soma do custo de fábrica com a
porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica).
Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%,
escrever um algoritmo para ler o custo de fábrica de um carro, calcular e
escrever o custo final ao consumidor.
*/
#include<stdio.h>
main(){
	float custoFabrica, porcDistribuidor, impostos, custoFinalCarro;
	printf("Digite o custo de fabrica: ");
	scanf("%f", &custoFabrica);
	impostos = (custoFabrica*45)/100;
	porcDistribuidor = (custoFabrica*28)/100;
	custoFinalCarro = custoFabrica + porcDistribuidor + impostos;
	printf("Custo Final ao Consumidor: R$%.2f", custoFinalCarro);
}
