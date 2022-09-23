/*
6. Entrar com um número inteiro positivo e exibir o fatorial deste número, 
lembrando que 0! = 1. Exemplo: 5! = 5x4x3x2x1 = 120
*/
#include<stdio.h>
main(){
	int num,fat = 1;
	printf("Fatorial de: ");
	scanf("%d", &num);
	printf("Fatorial de %d! = ", num);
	for(int i = num;i>0; i--){
		if(i != 1){
			printf("%dx",i);
		}else{
			printf("%d = ",i);	
		}
		fat *= i;
	}
	printf(" %d", fat);
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
}
