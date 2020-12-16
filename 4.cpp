#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int i,tpa=0,si=0,ci;
	float pg,pgc,pc,acu,ln=1,con=1,nt=0,ntp,mvp;
	for (i=1;i<51;i++){
		printf("\n\n Ingrese la nota del trabajo practico ");
		scanf("%f",&ntp);
		printf("\n Ingrese una nota ");
		scanf("%f",&ln);
			while(ln>=0){
			con=con+1;
			acu=ln+acu;
			printf("\n Ingrese una nota ");
			scanf("%f",&ln);			
			}
			
			if (ntp>=6){
				tpa=tpa+1;
			}
	nt=ntp+acu;
	pg=nt/con;	
	pgc=pgc+pg;
			if (pg>mvp){
				mvp=pg;
				ci=i;
			}
			
			if (con<=2){
			si=si+1;	
			}
			
	printf("\n El promedio del alumno %d es de %f ",i,pg);
	printf("\n ////////////////////////////////////////////////////////");
	con=1;
	acu=0;		
	}
	pc=pgc/50;
	printf("\n La cantidad de alumnos es %d ",tpa);
	printf("\n El promedio general del curso es %f ",pc);
	printf("\n El mejor promedio fue del alumno %d con %f ",ci,mvp);
	printf("\n La cantidad de alumnos con 2 o menos notas ingresadas es %d",si);
	return 0;
  }
