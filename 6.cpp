#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int i,fac=1,num=0;
	printf("Ingrese un numero ");
	scanf("%d",&num);
	for (i=1;i<=num;i++){
		fac=fac*i;
	}
	printf("El factorial es %d ",fac);
	return 0;
}

