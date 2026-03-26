#include <stdio.h>
#include <string.h>

int main(){
	
	char status[20] = "";
	int impacto = 0, prazo = 0;
	printf ("informe a situacao do status, impacto e prazo(h)");
	scanf ("%s %d %d", &status, &impacto, &prazo);
	if (strcmp(status, "critico")==0){
		printf ("maxima\n ");
	}
	else if (impacto >= 8 || prazo < 24){
		printf ("alta");
	}
	
	else{
		printf ("normal");
	}
	
}
