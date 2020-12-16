#include <stdio.h>
#include<stdio.h>
#include<conio.h>
int main()
{
	int I=0,num=0,mm=0;
	printf("Ingrese un numero que este entre 1 y 10 ");
	scanf("%d",&num);
	if (num>10){
		printf("Error");
	} else if (num <= 0){
		printf("Error");
	} else{
	
		for (I=1;I<=12;I++){
			mm=num*I;
			printf("\n %d x %d = %d",num,I,mm);
		}
	}
}

