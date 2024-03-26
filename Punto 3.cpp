#include <stdio.h>

int main() {
    float parcialuno, parcialdos, parcialtres, examenfinal, trabajofinal, prom, final;

    printf("Calificacion del primer parcial: ");
    scanf("%f", &parcialuno);

    printf("Calificacion del segundo parcial: ");
    scanf("%f", &parcialdos);

    printf("Calificacion del tercer parcial: ");
    scanf("%f", &parcialtres);

    prom = (parcialuno + parcialdos + parcialtres) / 3;

    printf("Cual es la calificacion del examen final: ");
    scanf("%f", &examenfinal);


    printf("Cual es la calificacion del trabajo final: ");
    scanf("%f", &trabajofinal);

   
    final = (prom * 0.55) + (examenfinal * 0.30) + (trabajofinal * 0.15);

    printf("\nLa calificacion en Algoritmos es: %f\n", final);

    return 0;
}