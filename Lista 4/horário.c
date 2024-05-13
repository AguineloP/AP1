#include <stdio.h>

int main()
{
	int hora;
	
	printf("digite um horário de 0 a 23:\n");
	scanf("%i", &hora);
	
	if(hora>=0 && hora<=11){
	    printf("Bom dia!");
	}
	
	else if(hora>=12 && hora<=17){
	    printf("Boa tarde!");
	}
	else{
	    printf("Boa noite!");
	}
}