#include <stdio.h>
#include <stdlib.h>

#include"color.h"
#include"fecha.h"
#include"mascota.h"
#include"servicio.h"
#include"trabajo.h"
#include"tipo.h"

int inicializarTrabajos(eTrabajo listaTrabajos[],int tam)
{
    int todoOk=0;

    if(listaTrabajos != NULL && tam >0)
    {
        for(int i=0; i<tam; i++)
        {
            listaTrabajos[i].isEmpty=1;
        }
        todoOk=1;
    }


    return todoOk;

}
int buscarLibreTrabajo(eTrabajo listaTrabajos[],int tam)
{

    int indice=-1;

    if(listaTrabajos != NULL && tam >0)
    {
        for(int i=0; i<tam; i++)
        {
            if (listaTrabajos[i].isEmpty)
            {
                indice=i;
                break;
            }
        }

    }
    return indice;
}

/*int altaTrabajo(eTrabajo listaTrabajos[],int tamTr,eMascota listaMascotas[],int tam,eColor colores[],int tamCo,eServicio servicios[],int tamSe,eTipo tipos[],int tamTi,int* pId  )
{
    int todoOk=0;
    int indice;
    eTrabajo auxTrabajo;
    if(listaTrabajos != NULL && tam>0 && pId !=NULL)
    {
        system("cls");
        printf("** Alta Trabajo ***\n");
        indice=buscarLibreTrabajo(listaTrabajos,tam);
        if(indice== -1)
        {
            printf("No hay lugar en el sistema");
        }
        else
        {

         mostrarMascotas(listaMascotas,tam,colores,tamCo,servicios,tamSe,tipos,tamTi);
        printf("Ingrese id :");
        scanf("%d",&id);

        mostrarServicios(servicios,tam);
        printf("ingrese Trabajo:")
        scanf("%d",)



            auxTrabajo.id=*pId;
            auxTrabajo.isEmpty=0;
            (*pId)++;
            listaTrabajos[indice]=auxTrabajo;
            todoOk=1;
        }
    }

    return todoOk;

}
*/
