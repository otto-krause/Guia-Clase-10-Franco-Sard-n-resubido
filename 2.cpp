#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int mes,dia,an,a;
	printf("Ingrese un año ");
	scanf("%d",&an);
	while (an>0){
		printf("\n Ingrese un mes ");
		scanf("%d",&mes);
		while((mes<=12)&&(mes>=1)){
				printf("\n Ingrese un dia ");
				scanf("%d",&dia);
				if (mes==2){
				while((28>=dia)&&(dia>=1)){
					printf("\n Fecha valida ");
					scanf(" ",&a);
	}						
} else{					
while((31>=dia)&&(dia>=1)){
printf("\n Fecha valida ");
scanf(" ",&a);
				}
			}
printf("\n Dia Invalido");
				}
		printf("\n Mes invalido");
	}
	return 0;
}
