#include <stdio.h>
int main(){
int contador;
    printf("Digite um número inteiro: ");
        scanf("%d", &contador);
while (contador <= 10){
    printf("%d ", contador);
    contador = contador + 1;
}   
return 0;
}