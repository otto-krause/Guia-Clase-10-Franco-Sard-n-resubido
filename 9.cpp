#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int i,num=0,num1=0,res=0,dea=0,ac=0;
	printf("Ingrese un numero para multiplicar ");
	scanf("%d",&num);
	printf("Ingrese otro numero ");
	scanf("%d",&num1);

	for (i=1;i<=num1;i++){
	res=num;
	ac=ac+res;
	}
	printf("El resultado es %d",ac);
	return 0;
}
