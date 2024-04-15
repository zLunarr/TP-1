#include <stdio.h>

int main(){
	
	int turno, precioturno, ciclo, especialidad, precio, preciototal;
	
	printf("Ingrese el Turno del alumno (1- Mañana, 2- Tarde, 3- Noche): ");
	scanf("%d", &turno);
	
	if(turno == 1){
		precioturno = 250;
	}
	
	else if(turno == 2){
		precioturno = 200;
	}
	
	else if(turno == 3){
		precioturno = 300;
	} /*Pongo un if por cada turno, en caso de que sea 3 o mayor, simplemente que lo asigne al turno noche, ademas, asigna un precio
	para cada turno, asi facilita la suma*/
	
	printf("Ingrese el ciclo: ");
	scanf("%d", &ciclo);
	
	printf("Ingrese la especialidad (1- Programacion, 2- Contabilidad, 3- Diseño Web, 4- Otra): ");
	scanf("%d", &especialidad);
	
	if(ciclo == 1 && especialidad == 1){
		precio = 3000;
	}
	else if(ciclo == 2 && especialidad == 1){
		precio = 3200;
	}
	
	if(ciclo == 1 && especialidad == 2){
		precio = 2500;
	}
	else if(ciclo == 2 && especialidad == 2){
		precio = 2800;
	}
	
	if(ciclo == 1 && especialidad == 3){
		precio = 3200;
	}
	else if(ciclo == 2 && especialidad == 3){
		precio = 3500;
	}
	
	if(ciclo == 1 && especialidad == 4){
		precio = 2000;
	}
	else if(ciclo == 2 && especialidad == 4){
		precio = 2500;
	} /*Pone las combinaciones posibles entre ciclo y especialidad, que en este caso son 8 combinaciones (2 por cada especialidad)
	asignando un precio a cada uno*/
	
	preciototal = precio + precioturno; //hace la suma entre el monto de la mensualidad y el monto del turno
	
	printf("El monto a pagar del alumno es %d", preciototal);
}
