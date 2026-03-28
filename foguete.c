#include <stdio.h>
int main(){
    int contador = 5;

    while( contador > 0 ) {
        printf("%d\n", contador);
        contador = contador - 1;
        if(contador == 0) {
            printf("Foguete decolou!");
            break;
        }
    }

    return 0;
}
