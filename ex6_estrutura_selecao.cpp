#include<stdio.h>

/*Um posto est� vendendo combust�veis com a seguinte tabela de descontos: 

Alcool: at� 20L desc 3%; acima de 20L desc 5% por litro
Gasolina: at� 20L desc 4%; acima de 20L desc 6% por litro

Escreva um algoritmo que leia o n�mero de litros vendidos e o tipo de
combust�vel (codificado da seguinte forma: 1-�lcool, 2-gasolina), calcule e
imprima o valor a ser pago pelo cliente sabendo-se que o pre�o do litro da
gasolina � R$ 3,30 e o pre�o do litro do �lcool � R$ 2,90. 
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
		default: printf("Op��o invalida!");
	}
	    	
	
}
