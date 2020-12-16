#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int main(void) {
	int i,dni,an,ch=0,cm=0,dtr=0;
	float me=0,ct1=0,ed,pme;
	char sex;
	printf("\n Ingrese su dni ");
	scanf("%d",&dni);
		for(i=dni;i>0;i++){
			ct1=ct1+1;
			printf("\n Ingrese su sexo F/M ");
			scanf("%s",&sex);
			printf("\n Ingrese su anio de nacimiento ");
			scanf("%d",&an);
			ed=2020-an;
			
			if(sex=='f'){
				cm=cm+1;
			}
			if(sex=='m'){
				ch=ch+1;
			}
			
			if(dni<=30000000){
				dtr=dtr+1;
			}
			if(ed<=17){
			me=me+1;	
			}
			
		
		printf("\n Ingrese su dni ");
		scanf("%d",&dni);
		i=dni;	
		}
	pme=(me*100)/ct1;
	printf("\n Cantidad de hombres %d ",ch);
	printf("\n Cantidad de mujeres %d ",cm);
	printf("\n Porcentaje de menores de edad es %f ",pme);
	printf("\n Personas con DNI menor a 30 millones %d ",dtr);
	
	return 0;
}

