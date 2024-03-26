//Punto 1

#include <stdio.h>

int main(){
	
	int opcion;
	
	printf("1- Son 100 alumnos o mas\n 2- Son de 50 a 99 alumnos\n 3- Son de 30 a 49 Alumnos\n 4- Son menos de 30\n Elija su opcion: ");
	scanf("%d", &opcion);
	
	switch(opcion){
		
		case 1: {
		printf("El costo por cada alumno es de $500");
		break;
		}
		
				case 2: {
		printf("El costo por cada alumno es de $400");
		break;
		}
		
						case 3: {
		printf("El costo por cada alumno es de $300");
		break;
		}
		
								case 4: {
		printf("El costo del alquiler del micro es de $6000");
		break;
		}
		
	}



