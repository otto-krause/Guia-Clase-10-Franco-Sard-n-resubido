#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int i=1,div;
	float rt,ac,num;
	printf("Ingrese un numero para dividir ");
	scanf("%f",&num);
	printf("Ingrese el divisor ");
	scanf("%d",&div);
	while (div<num){
	num=num-div;
	i=i+1;
	}
	
	printf("El resultado es %d",i);
	return 0;
}

