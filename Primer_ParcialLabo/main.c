#include <stdio.h>
#include <stdlib.h>
#include"color.h"
#include"fecha.h"
#include"mascota.h"
#include"servicio.h"
#include"trabajo.h"
#include"tipo.h"
#define TAM_TI 5
#define TAM_CO 5
#define TAM_SE 3
#define TAM 15
int main()
{
    char seguir='s';
    eMascota listaM[TAM];

    int nextIdMascota=1000;

    if(!inicializarMascota(listaM,TAM))
    {
        printf("Ocurrio un problema al inicializar mascotas\n");
    }

    hardcodearMascotas(listaM,TAM,10,&nextIdMascota);

    eTipo tipos[TAM_TI]=
    {
        {1000,"Ave"},
        {1001,"Gato"},
        {1002,"Perro"},
        {1003,"Pez"},
        {1004,"Roedor"}
    };

    eColor colores[TAM_CO]=
    {
        {5000,"Negro"},
        {5001,"Blanco"},
        {5002,"Rojo"},
        {5003,"Gris"},
        {5004,"Azul"}
    };

    eServicio servicios[TAM_SE]=
    {
        {20000,"Corte",450},
        {20001,"Desparacitado",800},
        {20002,"Castrado",600}
    };


    do
    {
        switch (menu())
        {
        case 1:
            if(altaMascota(listaM,TAM,colores,TAM_CO,servicios,TAM_SE,tipos,TAM_TI,&nextIdMascota))
            {
                printf("Alta exitosa!!\n\n");
            }
            else
            {
                printf("hubo un problema al hacer el alta\n");
            }


        case 2:
            if(modificarMascota(listaM,TAM,colores,TAM_CO,servicios,TAM_SE,tipos,TAM_TI,&nextIdMascota))
            {
                printf("modificacion exitosa!!\n\n");
            }
            else
            {
                printf("hubo un problema al hacer la modificacion\n");
            };
            break;


        case 3:

            if(bajaMascota(listaM,TAM,colores,TAM_CO,servicios,TAM_SE,tipos,TAM_TI,&nextIdMascota))
            {
                printf("Baja exitosa!!\n\n");
            }
            else
            {
                printf("hubo un problema al hacer la baja\n");
            }


            break;
        case 4:
            mostrarMascotas(listaM,TAM,colores,TAM_CO,servicios,TAM_SE,tipos,TAM_TI);


            system("pause");



            break;

        case 5:

            mostrarTipos(tipos,TAM_TI);
            system("pause");


            break;

        case 6:


            mostrarColores(colores,TAM_CO);
            system("pause");
            break;

        case 7:


            mostrarServicios(servicios,TAM_SE);

            system("pause");
            break;

        case 8:




            break;
        case 9:




            break;
        case 10:
            seguir='n';
            break;

            break;

        }

    }
    while(seguir=='s');



    return 0;
}
int menu()
{


    int opcion;


    system("cls");
    printf("*** ABM Mascotas  ***\n\n ");
    printf(" 1_ Alta Mascota\n ");
    printf(" 2_Modificar Mascota \n ");
    printf(" 3_Baja Mascota\n ");
    printf(" 4_Listar Mascota\n ");
    printf(" 5_Listar Tipos Mascota\n ");
    printf(" 6_Listar Colores Mascota\n ");
    printf(" 7_Listar Servicios Mascota\n ");
    printf(" 8_Alta Trabajo\n ");
    printf(" 9_Listar Trabajo\n ");

    printf(" 10_Salir\n ");

    printf("\n Ingrese Opcion:");

    /* fflush(stdin);
     gets(ingreso);

     opcion = atoi(ingreso);*/
    scanf("%d",&opcion);
    return opcion;

    return opcion;





}
