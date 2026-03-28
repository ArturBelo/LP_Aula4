#include <stdio.h>

int main() {
    int xh, ymin;

    printf("Horas trabalhadas: ");
    scanf("%d", &xh);

    int xmin = xh * 60;

    printf("Minutos: ");
    scanf("%d", &ymin);

    int total = xmin + ymin;
    
    int diferenca = (total > 480) ? (total - 480) : (480 - total);
    
    int horas = diferenca / 60;
    int minutos = diferenca % 60;
    
    printf("%s: %d horas %d minutos\n",
           (total > 480) ? "Quantidade de horas adcionadas" : "Quantidade retirada do banco", horas, minutos);
    
    return 0;
}