#include<stdio.h>

/*Um posto está vendendo combustíveis com a seguinte tabela de descontos: 

Alcool: até 20L desc 3%; acima de 20L desc 5% por litro
Gasolina: até 20L desc 4%; acima de 20L desc 6% por litro

Escreva um algoritmo que leia o número de litros vendidos e o tipo de
combustível (codificado da seguinte forma: 1-álcool, 2-gasolina), calcule e
imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da
gasolina é R$ 3,30 e o preço do litro do álcool é R$ 2,90. 
*/
main(){
	
	int tipoCombustivel;
	float qtdLitros, total, valorAPagar, descPorLitroGasolina, descPorLitroAlcool, totalDesconto;
	printf("Total Litros: ");
	scanf("%f", &qtdLitros);
	printf("Tipo de combustivel - 1: Alcool e 2: Gasolina.");
	scanf("%d", &tipoCombustivel);
	switch(tipoCombustivel){
		case 1: 
				if(qtdLitros <= 20){
					descPorLitroAlcool = 2.90 * 0.03;
					totalDesconto = descPorLitroAlcool * qtdLitros;
					total = qtdLitros * 2.90;
					valorAPagar =  total - totalDesconto;
					printf("Total a Pagar: %.2f", valorAPagar);
				
				}else {
					descPorLitroAlcool = 2.90 * 0.05;
					totalDesconto = descPorLitroAlcool * qtdLitros;
					total = qtdLitros * 2.90;
					valorAPagar = total - totalDesconto;
					printf("Total a Pagar: %.2f", valorAPagar);
				
				}
					break;
		
	    case 2:
	    		if(qtdLitros <= 20){
	    			descPorLitroGasolina = 3.30 * 0.04;
	    			totalDesconto = descPorLitroGasolina * qtdLitros;
	    			total = qtdLitros * 3.30;
					valorAPagar =  total - totalDesconto;
					printf("Total a Pagar: %.2f", valorAPagar);
					
				}else {
					descPorLitroGasolina = 3.30 * 0.06;
					totalDesconto = descPorLitroGasolina * qtdLitros;
					total = qtdLitros * 3.30;
					valorAPagar = total - totalDesconto;
					printf("Total a Pagar: %.2f",  valorAPagar);
					
				}	
				break;
		default: printf("Opção invalida!");
	}
	    	
	
}
