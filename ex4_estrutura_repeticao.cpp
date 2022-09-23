//4. estrutura repetição
#include<stdio.h>
main(){
	int codigo;
	float preco, maiorPreco, soma = 0;
	for(int i =1; i<=15; i++){
		printf("Digite o codigo do produto: ");
		scanf("%d", &codigo);
		printf("Digite o preco do produto: ");
		scanf("%f", &preco);
		soma+= preco;
		if(preco>maiorPreco){
			maiorPreco=preco;
		}
	}
	printf("Maior preco: R$%.2f", maiorPreco);
	printf("\nMedia dos precos: R$%.2f", soma/15);
}
