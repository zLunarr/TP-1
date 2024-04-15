#include <stdio.h>

int main(){
	
	int base, potencia, acum = 1;
	
	printf("Ingrese la base: ");
	scanf("%d", &base);
	
	printf("Ingrese la potencia: ");
	scanf("%d", &potencia);
	
	
		if(base < 0 && potencia < 0){
		printf("El numero no es valido, vuelva a intentarlo.\n");
		
		printf("Ingrese la base");
		scanf("%d", &base);
	
		printf("Ingrese la potencia");
		scanf("%d", &potencia);
		potencia = 0;
		base = 0;
	} //El if revisa si el numero dado es negativo, en ese caso se volvera a preguntar el numero y se reinicia.
	
	for(int i = 0; i < potencia; i++){ //Se declara i, la unica condicion es que si no llega al numero de repeticiones de la potencia que siga.
		acum = acum * base; //Acumula el resultado para que no se pierda en el for y pueda multiplicarse a si mismo hasta el fin del for
	}
	
	printf("El resultado es %d", acum);
	
	
	
	
	
	
}
