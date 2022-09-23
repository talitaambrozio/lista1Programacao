//2. Ler uma medida em polegadas e imprimir a equivalente em centímetros, sabendo que 2.54 cm equivale a 1 polegada.
#include<stdio.h>
main(){
	float polegadas;
	printf("Digite as polegadas: ");
	scanf("%f", &polegadas);
	printf("%.2f polegadas equivalem a %.2f centimentros.", polegadas, (polegadas*2.54));
}
