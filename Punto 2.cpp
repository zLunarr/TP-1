	#include <stdio.h>

int main() {
    float sueldo, venta1, venta2, venta3, comision, total;


    printf("El sueldo base del vendedor es: ");
    scanf("%f", &sueldo);

    printf("Primera Venta: ");
    scanf("%f", &venta1);

    printf("Segunda venta: ");
    scanf("%f", &venta2);

    printf("Tercera venta: ");
    scanf("%f", &venta3);

    comision = (venta1 + venta2 + venta3) * 0.10;

    total = sueldo + comision;

    printf("\nEl total por las comisiones es: %f\n", comision);
    printf("El total es: %f\n", total);

    return 0;
}


