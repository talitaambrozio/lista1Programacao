/*4. Ler as notas da 1a. e 2a. avalia��es de um aluno. Calcular a m�dia aritm�tica
simples e escrever uma mensagem que diga se o aluno foi ou n�o aprovado
(considerar que nota igual ou maior que 6 o aluno � aprovado). Escrever tamb�m
a m�dia calculada.*/
#include<stdio.h>
main(){
	float n1,n2,media;
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	media= (n1+n2)/2;
	if(media >= 6.0){
		printf("Media = %.2f. Aprovado", media);
	}else{
		printf("Media = %.2f. Reprovado", media);
	}
}
