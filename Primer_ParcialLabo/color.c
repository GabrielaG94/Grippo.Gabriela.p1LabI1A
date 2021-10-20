#include <stdio.h>
#include <stdlib.h>
#include"color.h"
int cargarDescripcionColor(eColor listaColores[],int tam,int idColores,char descripcion[]){
    int todoOk=0;
    if(listaColores !=NULL && tam > 0 && descripcion != NULL){

        for(int i=0;i<tam;i++){
            if(listaColores[i].id==idColores){
                strcpy(descripcion,listaColores[i].nombreColor);
                break;
            }
        }

        todoOk=1;
    }

    return todoOk;
}

int mostrarColores(eColor listaColores[],int tam){
int todoOk=0;
if(listaColores != NULL && tam>0 ){
    printf(" ***  Colores  ***\n  ");
    printf("Id   Descripcion\n");
    for(int i=0;i < tam ;i++){
        printf("%d   %10s\n",listaColores[i].id,listaColores[i].nombreColor);
    }

    todoOk=1;
}

return todoOk;
}
validarIdColores(eColor listaColores[],int tam,int id){
int existe=0;

if(listaColores != NULL && tam>0 ){

        for(int i=0;i<tam;i++){
            if(listaColores[i].id==id){
                   existe=1;
                   break;

            }
        }
}

return existe;

}
