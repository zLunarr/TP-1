#include <stdio.h>

int main(){

int num, mayor = -1, menor = 999, acum = 0, prom;

for(int i = 0; i < 5; i++){
	
	printf("Inserte 5 numeros: ");
	scanf("%d", &num); //Pregunta por 5 numeros mediante for, el cual al cumplirse la condicion, que es repetirse 5 veces el print, seguira.
	
		if(num < 0){
		printf("El numero no es valido, vuelva a intentarlo.\n");
		num = 0;
		printf("Inserte 5 numeros: ");
		scanf("%d", &num); //En caso de que el numero sea negativo, simplemente dara un error y reiniciara el valor de esa iteracion, para repetir la pregunta
	}
	
	if(num > mayor){
		mayor = num; //Compara el numero con el valor inicial de mayor, el cual es -1, si este es mayor, la variable pasara a tener el valor de num
	}
	
	
	if(num < menor){
		menor = num;
	} //lo mismo que el anterior, simplemente que si este es menor a 999, tomara el valor de num.
	
	
	acum += num; //acum para poder realizar el promedio.
	
}

prom = acum / 5;

printf("El numero mayor es %d\n", mayor);
printf("El numero menor es %d\n", menor);
printf("El promedio es igual a %d\n", prom);

    return 0;
}

