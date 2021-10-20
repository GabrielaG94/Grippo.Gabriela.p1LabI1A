#include <stdio.h>
#include <stdlib.h>
#include"tipo.h"

int cargarDescripcionTipo(eTipo tipos[],int tam,int idTipo,char descripcion[]){
    int todoOk=0;
    if(tipos !=NULL && tam > 0 && descripcion != NULL){

        for(int i=0;i<tam;i++){
            if(tipos[i].id==idTipo){
                strcpy(descripcion,tipos[i].descripcion);
                break;
            }
        }

        todoOk=1;
    }

    return todoOk;
}

int mostrarTipos(eTipo tipos[],int tam){
int todoOk=0;
if(tipos != NULL && tam>0 ){
    printf(" ***  Tipos  ***\n  ");
    printf("Id   Descripcion\n\n");
    for(int i=0;i < tam ;i++){
        printf("%d   %10s\n",tipos[i].id,tipos[i].descripcion);
    }

    todoOk=1;
}

return todoOk;
}
validarIdTipos(eTipo tipos[],int tam,int id){
int existe=0;

if(tipos != NULL && tam>0 ){

        for(int i=0;i<tam;i++){
            if(tipos[i].id==id){
                   existe=1;
                   break;

            }
        }
}

return existe;

}
int menuModificacion()
{

    int opcion;


    printf("  1_Tipo\n");
    printf("  2_Vacunado\n");

    printf("  5_Salir\n\n");
    printf("Ingrese opcion:\n");
    scanf("%d",&opcion);
    return opcion;
}
