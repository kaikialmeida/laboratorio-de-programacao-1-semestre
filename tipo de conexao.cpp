#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
char h[20] = "";
int p = 0;
printf ("informe o protocolo e a porta: ");
scanf ("%s %d", &h, &p);
if (strcmp(h, "https")== 0 || p == 443){
	printf ("seguro\n");
}
else {
	printf ("inseguro\n");
}
system ("pause");
}
