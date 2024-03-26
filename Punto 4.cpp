#include <stdio.h>

int main() {
    int uno, dos, temp;

    printf("Cual es el primer numero: ");
    scanf("%d", &uno);

    printf("Cual es el segundo numero: ");
    scanf("%d", &dos);

    if (uno > dos) {
        temp = uno;
        uno = dos;
        dos = temp;
    }

    
    printf("Los pares entre los 2 numeros otorgados son:\n");
    for (int i = uno; i <= dos; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }


    return 0;
}



