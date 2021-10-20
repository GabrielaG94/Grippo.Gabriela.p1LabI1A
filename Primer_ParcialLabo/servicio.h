#ifndef SERVICIO_H_INCLUDED
#define SERVICIO_H_INCLUDED

/*• id(comienza en 20000)
• descripción (máximo 25 caracteres)
• precio*/
typedef struct{
int id;
char descripcion[25];
int precio;
}eServicio;

#endif // SERVICIO_H_INCLUDED
