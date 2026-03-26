#include <stdio.h>
#include <stdlib.h>

int main(){
	
float saldo_inicial= 0, saldo_depositado= 0, valor_sacado = 0;
int n= 0;

		do {
	 	 printf ("1. consultar saldo\n2. depositar dinheiro\n3. sacar dinheiro\n4. encerrar programa\n");
	  	 scanf("%d", &n);
	  		switch(n){
				case 1:
					if (saldo_depositado == 0){
				  		 printf ("saldo: $%.2f\n", saldo_inicial);
				 }
					else {
						printf ("saldo: $%.2f\n", saldo_inicial);
					}
					
		   	    break;
		    	case 2:
		    		printf ("informe o valor a ser depositado: $");
		    		scanf ("%f", &saldo_depositado);
		    		if (saldo_depositado > 0 ){
		    			printf ("saldo depositado no valor de: $%.2f\n", saldo_depositado);
		    			saldo_inicial= saldo_inicial + saldo_depositado;
		    	    }
		    	    else{
		    	    	printf ("ERRO: valor informado invalido!\n");	    	
					}
	     		break;
	     		case 3:
	     			printf ("informe o valor a ser sacado: $ ");
	     			scanf ("%f", &valor_sacado);
	     				if (valor_sacado > saldo_inicial){
	     					printf ("ERRO: saldo insuficiente!\n");
	     				
	     				}
	     				else if (valor_sacado <= 0){
	     					printf ("ERRO: valor informado invalido! tente novamente: \n");
						 }
	     				else  {
	     					saldo_inicial = saldo_inicial - valor_sacado;
	     					printf ("valor sacado: $%.2f\n", valor_sacado);		
						 }
				break;
	     		case 4:		
				break;	
				default:
				printf ("ERRO: informacao invalida!\n");
	     	}	
    	
		}while (n!= 4);
system ("pause");
}

