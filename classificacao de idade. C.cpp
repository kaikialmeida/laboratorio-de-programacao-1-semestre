#include <stdio.h>
#include <stdlib.h> 

//metrica focada na aplicacao de uma condicao unica para categorizar um valor//
int main(){
	int idade =0;
	printf ("informe sua idade: ");
	scanf ("%d", &idade);
	if (idade >= 18){
		printf ("adulto\n");
	}
	else 
	printf ("menor\n");
	
	system ("pause");
}
