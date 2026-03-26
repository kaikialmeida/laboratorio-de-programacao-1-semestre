#include <stdio.h>
#include <stdlib.h>


int main (){

float variacao= 0, ajuste = 0, media = 20;
int atual = 15;		
 variacao= ((atual - media) / media) * 100;
 ajuste = variacao * 1.2;
 
 if (ajuste < 20/100){
 		printf ("normal");
    }
 	else if(ajuste > 20/100 && ajuste < 50/100) {
	 	printf ("atencao");
	}
	else {
		printf ("anormal");
	}
 
 system ("pause");
	
	
}
