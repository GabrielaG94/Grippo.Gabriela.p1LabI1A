#include <stdio.h>
#include <stdlib.h>
#include"servicio.h"
int cargarDescripcionServicio(eServicio servicios[],int tam,int idServicio,char descripcion[]){
    int todoOk=0;
    if(servicios !=NULL && tam > 0 && descripcion != NULL){

        for(int i=0;i<tam;i++){
            if(servicios[i].id==idServicio){
                strcpy(descripcion,servicios[i].descripcion);
                break;
            }
        }

        todoOk=1;
    }

    return todoOk;
}

int mostrarServicios(eServicio servicios[],int tam){
int todoOk=0;
if(servicios != NULL && tam>0 ){
    printf(" ***  Servicio  ***\n  ");
    printf("Id   Descripcion\n\n");
    for(int i=0;i < tam ;i++){
        printf("%d   %10s\n",servicios[i].id,servicios[i].descripcion);
    }

    todoOk=1;
}

return todoOk;
}
validarIdServicios(eServicio servicios[],int tam,int id){
int existe=0;

if(servicios != NULL && tam>0 ){

        for(int i=0;i<tam;i++){
            if(servicios[i].id==id){
                   existe=1;
                   break;

            }
        }
}

return existe;

}
