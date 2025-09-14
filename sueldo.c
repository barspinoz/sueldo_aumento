#include <stdio.h>
int main(){
	/*variables de entrada*/
	float sueldo=0;
	
	/*variables de salida*/
	float sueldoFinal=0;
	
	/*variables intermedias*/
	float aumento=0;
	
	/*leer sueldo*/
	printf("\n Ingrese su sueldo: \n \t");
	scanf(" %f",&sueldo);
	
	/*calcular aumentos*/
	if(sueldo<=10000) {
		aumento=sueldo-(sueldo*.15);
	}//if
	else {
		if(sueldo<=15000) {
		aumento=sueldo-(sueldo*.11);
		}//if
	}//else
	if(sueldo>15000) {
		aumento=sueldo-(sueldo*.8);
	}//if
	
	/*sueldo final*/
	sueldoFinal=sueldo+aumento;
	printf("\n Su sueldo final es de: %.f \n",sueldoFinal);
}//main