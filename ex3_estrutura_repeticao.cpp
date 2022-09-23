/*3. Ler 2 valores, calcular e escrever a soma dos inteiros existentes entre os 2
valores lidos (incluindo os valores lidos na soma). Considere que o segundo
valor lido será sempre maior que o primeiro valor lido.*/
#include<stdio.h>
main(){
	int valor1, valor2, soma = 0;
	printf("Digite o primeiro valor: ");
	scanf("%d", &valor1);
	printf("Digite o segundo valor: ");
	scanf("%d", &valor2);
	if(valor1>valor2){
		printf("Valor invalido! Digite um valor maior que o primeiro:");
		scanf("%d", &valor2);
	}

	for(int i=valor1; i<=valor2;i++){
		soma+=i;
	}
	printf("A soma dos numeros de  %d a %d e igual a %d", valor1,valor2,soma);
	
}
