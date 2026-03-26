#include <stdio.h>
#include <stdlib.h>
int main (){
	
	int score;
	float renda;
	
	printf ("informe o valor do seu score: ");
	scanf ("%d", &score);
	
	printf ("informe sua renda: ");
	scanf ("%f", &renda);
	
	if (score >=700 && score<=1000){
		if (renda>= 5000){
			printf ("APROVADO\n");
		}
		else{
			printf ("renda baixa\n");	
		}
    }
	else if (score <700){
		printf ("score baixo\n");
	}
	else {
	printf ("score informado invalido\n");
	}
system ("pause");
}
