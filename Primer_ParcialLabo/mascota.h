#ifndef MASCOTA_H_INCLUDED
#define MASCOTA_H_INCLUDED
#include"color.h"
#include"fecha.h"
#include"servicio.h"
#include"trabajo.h"
#include"tipo.h"
/*• id
• nombre (máx 20 caracteres)
• idTipo Validar
• idColor Validar
• edad
• vacunado(“s”, “n”)*/
typedef struct{
int id;
char nombre[20];
int idTipo;
int idColor;
int edad;
char vacunado;
int isEmpty;

}eMascota;

#endif // MASCOTA_H_INCLUDED
int inicializarMascota(eMascota listaMascotas[],int tam);
int buscarLibreMascota(eMascota listaMascotas[],int tam);
int altaMascota(eMascota listaMascotas[],int tam,eColor colores[],int tamCo,eServicio servicios[],int tamSe,eTipo tipos[],int tamTi,int* pId  );
void mostrarMascota(eMascota unaMascota,int tam,eColor colores[],int tamCo,eServicio servicios[],int tamSe,eTipo tipos[],int tamTi);
int mostrarMascotas(eMascota listaMascotas[],int tam,eColor colores[],int tamCo,eServicio servicios[],int tamSe,eTipo tipos[],int tamTi);
int ordenarMascotas(eMascota listaMascotas[],int tam,eTipo tipos[],int tamTi,eColor colores[],int tamCo);
