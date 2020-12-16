#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int fac,ct,pu,np,pmv,mv,vt;
	printf("\n Ingrese su factura ");
	scanf("%d",&fac);	
	 while (fac!=999){	
		printf("\n Ingrese la cantidad ");
		scanf("%d",&ct);
		printf("\n Ingrese el precio unitario ");
		scanf("%d",&pu);		
		printf("\n Ingrese el numero de producto ");
		scanf("%d",&np);	
				vt=ct*pu;
					if (vt>mv){
						mv=vt;
					}
				if (ct>pmv) {
					pmv=np;
				}
	printf("\n ////////////////////////////////////////////////////////");
	printf("\n Ingrese su factura ");
	scanf("%d",&fac);	
	}
	printf("\n El mayor importe fue %d ",mv);
	printf("\n El producto mas vendido fue %d ",pmv);
	return 0;
}

