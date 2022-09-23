/*5  Chico tem 1,50m e cresce 2 centímetros por ano, enquanto Juca tem 1,10m e
cresce 3 centímetros por ano. Construir um algoritmo que calcule e imprima
quantos anos serão necessários para que Juca seja maior que Chico. 

chico =1.50 2cm ano
juca = 1.10 3cm ano
*/
#include<stdio.h>
main(){
	float alturaChico = 1.5, alturaJuca = 1.1;
	int ano =0;
		
	while(alturaChico>alturaJuca){
		alturaChico+= 0.2;
		alturaJuca+= 0.3;
		ano++;
	}
	printf("Quantidade de anos: %d", ano);
}
