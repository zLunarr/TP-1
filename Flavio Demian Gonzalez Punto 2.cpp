#include <stdio.h>

int main(){
	
	int hermano, mayor = -1, menor = 999, mayorpos, menorpos, diff;
	
	for(int i = 0; i < 2; i++){
		printf("Introduzca la edad del hermano N°%d: ", i + 1);
		scanf("%d", &hermano); //Pregunta por la edad del hermano y guarda la variable en "hermano"
		
		if(hermano > mayor){
		mayor = hermano;
		mayorpos = i + 1; //Pregunta que si la variable hermano es mayor a -1 (valor inicial), que este reemplace este valor
		//Este tambien dara el numero de hermano, o sea, i/el numero de iteracion dado.
	}
	
	
	if(hermano < menor){
		menor = hermano;
		menorpos = i + 1; //lo mismo que en la anterior, solo que compara con el valor inicial de 999 para indicar el menor.
	}
	
	
	
	}
	
	diff = mayor - menor; //Indica la diferencia de edad mediante una resta (justamente una diferencia es una resta)
	printf("El hermano mayor es el hermano N°%d con %d años\n", mayorpos, mayor);
	printf("El hermano menor es el hermano N°%d con %d años\n", menorpos, menor);	
	printf("Hay una diferencia de edad de %d años\n", diff);
}
