#include <stdio.h>

int main(){
	
	int mes;
	
	printf("Ingrese el numero correspondiente del 1 al 12: ");
	scanf("%d", &mes); //Pregunta por el numero correspondiente para elegir el respectivo mes.
	
	
	switch(mes){ //Se usa un switch para mayor facilidad, dependiendo del numero que elija saltara uno u otro
		
		case 1:
			printf("El mes que usted elijio fue Enero");
			break;
			
			case 2:
				printf("El mes que usted elijio fue Febrero");
				break; 
				
				case 3:
					printf("El mes que usted elijio fue Marzo");
					break; 
				
					case 4:
						printf("El mes que usted elijio fue Abril");
						break;
					
						case 5:
							printf("El mes que usted elijio fue Mayo");
							break;
							
							case 6:
								printf("El mes que usted elijio fue Junio");
								break;

								case 7:
								printf("El mes que usted elijio fue Julio");
								break;

								case 8:
									printf("El mes que usted elijio fue Agosto");
									break;
									
									case 9:
										printf("El mes que usted elijio fue Septiembre");
										break;
							
										case 10:
									printf("El mes que usted elijio fue Octubre");
									break;

											case 11:
										printf("El mes que usted elijio fue Noviembre");
										break;

												case 12:
											printf("El mes que usted elijio fue Diciembre");
											break;
											
													default:
													printf("Este numero no es valido, vuelva a intentarlo.");
													break; //Default es por si elije un numero de mes incorrecto, como el 13 o el 14.
									
									
			
				

		
		
	}
}
