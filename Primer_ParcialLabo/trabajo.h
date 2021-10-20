#ifndef TRABAJO_H_INCLUDED
#define TRABAJO_H_INCLUDED
#include"fecha.h"
#include <stdio.h>
#include <stdlib.h>
#include"color.h"
#include"fecha.h"


#include"tipo.h"
/*id (autoincremental)
• idMascota (debe existir) Validar
• idServicio (debe existir) Validar
• fecha ( Validar día, mes y año )*/
typedef struct{
int id;
int idMascota;
int idServicio;
eFecha fecha;
int isEmpty;
}eTrabajo;
#endif // TRABAJO_H_INCLUDED
