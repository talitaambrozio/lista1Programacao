/*Uma loja fornece 10% de desconto para funcion�rios e 5% de desconto para
clientes vips. Fa�a um programa que calcule o valor total a ser pago por uma
pessoa. O programa dever� ler o valor total da compra efetuada e um c�digo que
identifique se o comprador � um cliente comum (1), funcion�rio (2) ou vip (3).*/
#include<stdio.h>
main(){
	float valorTotalPagar, valorTotalCompra;
	int tipoCliente;
	printf("Digite o Tipo de Cliente: \n1 - Cliente Comum \n2 - Funcionario  \n3 -  VIP\n");
	scanf("%d", &tipoCliente);
	printf("Digite o total da compra: ");
	scanf("%f", &valorTotalCompra);
	if(tipoCliente == 1){
		valorTotalPagar = valorTotalCompra;
	}else if(tipoCliente == 2){
		valorTotalPagar = valorTotalCompra - (valorTotalCompra * 0.10);
	}else if(tipoCliente == 3){
		valorTotalPagar = valorTotalCompra - (valorTotalCompra * 0.05);
	}
	printf("Valor Total a Pagar: R$%.2f", valorTotalPagar);
}
