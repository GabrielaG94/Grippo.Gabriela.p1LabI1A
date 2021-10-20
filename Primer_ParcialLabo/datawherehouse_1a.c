#include "datawherehouse_1a.h"
#include <string.h>
char nombres[10][20]={
"Juan",
"Pedro",
"Sofia",
"Miguel",
"Valentina",
"Camila",
"Andrea",
"Luis",
"Diego",
"Analia"

};

char apellidos[10][20]={
"Perez",
"Gomez",
"Gonzales",
"Contreras",
"Fernandez",
"Grippo",
"Flores",
"Zarate",
"Gamarra",
"Torres"

};

char mascotas[10][20]={
"Luna",
"Tommy",
"Sammy",
"Bunny",
"Sultan",
"Pepe",
"Pipo",
"Simon",
"Negrito",
"Blanquito"

};

char sexos[10]={
'm','m','f','m','f','f','f','m','m','f'
};

int edades[10]={
23,21,28,32,45,29,39,23,28,27
};

float alturas[10]={1.65,1.67,1.9,1.78,1.75,1.7,1.65,1.73,1.70,1.71};

int idLocalidades[10]={1001,1002,1000,1001,1001,1003,1004,1002,1004,1001};

/*eFecha fechas[10]=
{{26,4,2019},
{18,6,2018},
{11,10,2018},
{29,04,2014},
{13,3,2013},
{15,8,2008},
{02,12,2018},
{06,11,2017},
{16,03,2018},
{19,11,2001}};*/

char marcas[10][20]={
"yamaha",
"honda",
"motomel",
"toyota",
"renault",
"Chevrolet",
"meriva",
"xtz",
"gilera",
"jeep"

};

int idTipos[10]={1001,1002,1000,1001,1001,1003,1004,1002,1004,1001};
int idColores[10]={5001,5002,5000,5001,5001,5003,5004,5002,5004,5001};
int idServicios[10]={20002,20001,20003,20002,20004,20002,20003,20001,20001,20002};


int idTrabajos[10]={10,12,10,11,11,13,14,12,14,11};

int rodados[10]={20,22,26,26,26,28,28,20,22,18};

int sueldos[10]={10000,10200,10500,10100,12000,12300,14000,12500,14500,11000};
/*char vacunados[10][20]={
"si",
"no",
"no",
"si",
"si",
"si",
"no",
"si",
"no",
"si"

};*/
char vacunados[10]={
's','n','s','s','s','n','n','n','s','s'
};
int hardcodearMascotas(eMascota listaMascotas[],int tam,int cant,int* pId){
int contador =-1;

if(listaMascotas != NULL && tam > 0 && cant >=0 && cant  <= tam && pId !=NULL){
    contador=0;
    for(int i=0;i < cant;i++){
        listaMascotas[i].id= *pId;
      (*pId)++;
        strcpy( listaMascotas[i].nombre,mascotas [i]);
        listaMascotas[i].idTipo=idTipos[i];
        listaMascotas[i].idColor=idColores[i];
        listaMascotas[i].edad = edades[i];
        //listaMascotas[i].vacunado=vacunados[i];
       // listaMascotas[i].fNac=fechas[i];
       //strcpy( listaMascotas[i].vacunado,vacunados[i]);
        listaMascotas[i].isEmpty=0;
        contador++;
    }
}

return contador;
}
