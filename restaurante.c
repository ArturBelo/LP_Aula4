#include <stdio.h>
 int main(){
    int grupo;
    
    printf("Qual numero e do seu grupo: 1-Jardim, 2-brinquedos, 3 Sala vip. \nEscolha um:");
    scanf("%d", &grupo);
    
    switch(grupo){
        case 1:
            printf("Area indicada jardim ");
            break;
        case 2:
             printf("Area indicada brinquedos ");
             break;
        case 3:
            printf("Area indicada sala vip ");
        default:
            printf("Essa opção não e valida tente novamente");
            break;
    return 0;
        
    }
 }