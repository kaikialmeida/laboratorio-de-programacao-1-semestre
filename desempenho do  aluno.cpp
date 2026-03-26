#include <stdio.h>
#include <stdlib.h>

int main (){
float nota = 0;

printf ("informe sua nota: ");
scanf ("%f", &nota);
if (nota >= 90){
	printf ("excelente\n");
}
else if (nota >= 70 && nota <=89){
	printf("bom\n");
}
else if (nota >=50 && nota <= 69 ){
	printf ("regular\n");
}
else {
    printf ("insuficiente\n");
}
system ("pause");
}

