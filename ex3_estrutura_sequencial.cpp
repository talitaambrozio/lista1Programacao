/*
3. O custo de um carro novo ao consumidor � a soma do custo de f�brica com a
porcentagem do distribuidor e dos impostos (aplicados ao custo de f�brica).
Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%,
escrever um algoritmo para ler o custo de f�brica de um carro, calcular e
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
