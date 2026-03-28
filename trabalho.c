#include <stdio.h>

int main() {
    int xh, ymin;

    printf("Horas trabalhadas: ");
    scanf("%d", &xh);

    int xmin = xh * 60;

    printf("Minutos: ");
    scanf("%d", &ymin);

    int total = xmin + ymin;
    int banco_de_horas = total - 480;

    if (total > 480) {
        int var1 = banco_de_horas / 60;
        int var2 = banco_de_horas % 60;
        printf("Quantidade de horas: %d horas %d minutos\n", var1, var2);
    } else {
        int faltam = 480 - total;
        int horas = faltam / 60;
        int minutos = faltam % 60;
        printf("Quantidade retirada do banco: %d horas %d minutos\n", horas, minutos);
    }

    return 0;
}