#include <stdio.h>
#include <stdlib.h>
#include"mascota.h"
int inicializarMascota(eMascota listaMascotas[],int tam)
{
    int todoOk=0;

    if(listaMascotas != NULL && tam >0)
    {
        for(int i=0; i<tam; i++)
        {
            listaMascotas[i].isEmpty=1;
        }
        todoOk=1;
    }


    return todoOk;

}
int buscarLibreMascota(eMascota listaMascotas[],int tam)
{

    int indice=-1;

    if(listaMascotas != NULL && tam >0)
    {
        for(int i=0; i<tam; i++)
        {
            if (listaMascotas[i].isEmpty)
            {
                indice=i;
                break;
            }
        }

    }
    return indice;
}
int buscarMascotaId(eMascota listaMascotas[],int tam,int id)
{
    int indice=-1;

    if(listaMascotas != NULL && tam >0 )
    {
        for(int i=0; i<tam; i++)
        {
            if (listaMascotas[i].isEmpty==0 && listaMascotas[i].id==id)
            {
                indice=i;
                break;
            }
        }

    }
    return indice;
}
int altaMascota(eMascota listaMascotas[],int tam,eColor colores[],int tamCo,eServicio servicios[],int tamSe,eTipo tipos[],int tamTi,int* pId  )
{
    int todoOk=0;
    int indice;
    eMascota auxMascota;
    if(listaMascotas != NULL && tam>0 && pId !=NULL)
    {
        system("cls");
        printf("** Alta Mascota ***\n\n");
        indice=buscarLibreMascota(listaMascotas,tam);//la posiscion de la primera estructura libre
        if(indice== -1)//no hay lugar
        {
            printf("No hay lugar en el sistema");
        }
        else
        {


            printf("Ingrese Nombre:\n");
            fflush(stdin);
            gets(auxMascota.nombre);

            mostrarTipos(tipos,tamTi);
            printf("Ingres Id Tipo: \n");
            scanf("%d",&auxMascota.idTipo);

            mostrarColores(colores,tamCo);
            printf("Ingres Id Color: \n");
            scanf("%d",&auxMascota.idColor);




            printf("Ingres Edad : \n");
            scanf("%d",&auxMascota.edad);

            printf("Vacunado ? S / N :\n");
            fflush(stdin);
            scanf("%c",&auxMascota.vacunado);

            auxMascota.id=*pId;
            auxMascota.isEmpty=0;
            (*pId)++;
            listaMascotas[indice]=auxMascota;
            todoOk=1;


        }
    }

    return todoOk;

}
void mostrarMascota(eMascota unaMascota,int tam,eColor colores[],int tamCo,eServicio servicios[],int tamSe,eTipo tipos[],int tamTi)
{

    char descColor[20];
    char descTipo[20];
    char descServicio[20];

    cargarDescripcionColor(colores,tamCo,unaMascota.idColor,descColor);
    cargarDescripcionTipo(tipos,tamTi,unaMascota.idTipo,descTipo);

    printf(" %d    %10s  %d %10s   %10s      \n",
           unaMascota.id,
           unaMascota.nombre,
           unaMascota.edad,
           descTipo,
           descColor
           );
           //unaMascota.vacunado);

}

int mostrarMascotas(eMascota listaMascotas[],int tam,eColor colores[],int tamCo,eServicio servicios[],int tamSe,eTipo tipos[],int tamTi)
{
    int todoOk=0;
    int flag=1;
    if(listaMascotas != NULL && tam >0)
    {
        system("cls");
        printf("*** Listado de Mascotas ***\n");
        printf("Id    Nombre       Tipo       Color        Vacunado \n");
        printf("-------------------------------------------------\n");
        for(int i=0; i<tam; i++)
        {
            if(listaMascotas[i].isEmpty==0)
            {
                mostrarMascota(listaMascotas[i],tam,colores,tamCo,servicios,tamSe,tipos,tamTi);

                flag=0;//para q despues de recorrer pregunto,significa q aca no entre nunca
            }
            if(flag)
            {
                printf("No hay personas para mostar\n");
            }
        }

        todoOk=1;
    }
    return todoOk;
}
int ordenarMascotas(eMascota listaMascotas[],int tam,eTipo tipos[],int tamTi,eColor colores[],int tamCo)
{

     int todoOk=0;
    eTipo auxTipo;

    if(listaMascotas !=NULL && tam >0)
    {
        for(int i=0; i<tam-1; i++)
        {
            for(int j=i+1; j< tam; j++)
            {
                if(listaMascotas[i].idTipo > listaMascotas[j].idTipo )


                {
                    auxTipo=tipos[i];
                    tipos[i]=tipos[j];
                    tipos[j]=auxTipo;
                }
            }
        }


        todoOk=1;
    }

    return todoOk;
}
int bajaMascota(eMascota listaMascotas[],int tam,eColor colores[],int tamCo,eServicio servicios[],int tamSe,eTipo tipos[],int tamTi,int* pId )
{
    int todoOk=0;
    int id;
    int indice;
    char confirma;

    if(listaMascotas!=NULL && tam > 0)
    {
        system("cls");

        printf("    *** Baja Mascota ***\n\n");
        mostrarMascotas(listaMascotas,tam,colores,tamCo,servicios,tamSe,tipos,tamTi);
        printf("Ingrese id :");
        scanf("%d",&id);

        indice=buscarMascotaId(listaMascotas,tam,id);
        if(indice==-1)
        {
            printf("No existe una mascota con ese  id : %d",id);
        }
        else
        {
            mostrarMascota(listaMascotas[indice],tam,colores,tamCo,servicios,tamSe,tipos,tamTi);
            printf("Confirma baja?");
            fflush(stdin);
            scanf("%c",&confirma);

            if(confirma=='s')
            {
                listaMascotas[indice].isEmpty=1;
                todoOk=1;
            }
            else
            {
                printf("Se ha cancelado la baja\n");
            }
        }


    }

    return todoOk;

}
int modificarMascota(eMascota listaMascotas[],int tam,eColor colores[],int tamCo,eServicio servicios[],int tamSe,eTipo tipos[],int tamTi,int* pId)
{
    int todoOk=0;
    int id;
    int indice;
    char confirma;
    char auxTipo[20];
    char auxVacunado;


    if(listaMascotas!=NULL && tam > 0)
    {
        system("cls");

        printf("    *** Modificar Mascota ***\n\n");
                mostrarMascotas(listaMascotas,tam,colores,tamCo,servicios,tamSe,tipos,tamTi);
        printf("Ingrese id:");
        scanf("%d",&id);

     indice=buscarMascotaId(listaMascotas,tam,id);
        if(indice==-1)
        {
            printf("No existe una persona con id : %d",id);
        }
        else
        {
            mostrarMascota(listaMascotas[indice],tam,colores,tamCo,servicios,tamSe,tipos,tamTi);
            printf("Confirma modificacion?:");
            fflush(stdin);
            scanf("%c",&confirma);

            if(confirma=='s')
            {
                switch(menuModificacion())
                {
                case 1:


                    mostrarTipos(tipos,tamTi);
                   printf("Ingres Id Tipo: \n");
                   scanf("%d",&listaMascotas[indice].idTipo);
                    break;
            case 2:

            break;
                default:
                    printf("opcion invalida\n");
                }

                todoOk=1;
            }
            else
            {
                printf("Se ha cancelado la modificacion\n");
            }
        }


    }

    return todoOk;
}
