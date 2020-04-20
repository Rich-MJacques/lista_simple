#include "list.h"
#include <stdlib.h>
#include <stdio.h>
int main(){
    printf("Creare la lista:");
    create_list();
}


void switch_para_agregar(){
    printf("Que desea hacer?");
    printf("1. Agregar al inicio \n 2. Agregar al final \n Agregar en una pocision");
    scanf("%d",int e);
    switch(e){
        case 1: 
            printf("Que dato agregará?");
            scanf("%d",int e2);
            add_init(t,12);
            printf("imprimiendo lista");
            printf("%list",t);
            break;
        case 2:
            printf("Que dato agregará?");
            scanf("%d",int e3);
            add_end(t,14);
            printf("imprimiendo lista");
            printf("%list",t);
            break;
        case 3:
            printf("Que dato agregará?");
            scanf("%d",int e4);
            add(t,13,1);
            printf("imprimiendo lista");
            printf("%list",t);
            break;
            

    }
    printf("Desea hacer otra accion? escriba 10");
    scanf("%d",int e5);
    if(e5==10) switch_para_agregar();
}