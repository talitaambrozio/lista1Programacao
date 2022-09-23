/*4. Ler as notas da 1a. e 2a. avaliações de um aluno. Calcular a média aritmética
simples e escrever uma mensagem que diga se o aluno foi ou não aprovado
(considerar que nota igual ou maior que 6 o aluno é aprovado). Escrever também
a média calculada.*/
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
