#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
gcc libreria.c -o libreriaFuncional
./libreriaFuncional
*/


//estructura de datos
typedef struct atributoLibro{
    char* nombreLibro;
    double precioLibro;
    int estadoLibro;
}atributoLibro;

//funciones
void menu();
void agregarLibros();
void ventaLibro();
void listaLibros();
void modificarPrecio();
void disponibilidadLibro();
 
int main(){
menu();
return 0;

}

void menu(){
    int opcion;

           while (opcion!= 6)
       {
        /* code */
        printf("\n Elija una de las siguientes opciones \n");
        printf("1. Agregar libros \n");
        printf("2. Vender libro \n");
        printf("3. Listar libros \n");
        printf("4. Cambiar precio de libro \n");
        printf("5. Estado del libro \n");
        printf("6. Salir \n");
        scanf("%i", &opcion);

//condicional donde llamare mis funciones
    switch (opcion)
    {
    case 1:
        agregarLibros();
        break;
    case 2:
          ventaLibro;
        break;
    case 3:
         listaLibros;
        break;
    case 4:
        modificarPrecio;
        break;    
    case 5:
        disponibilidadLibro;
    break;
    case 6:
         exit;
        break;                                 
    default:
        printf("No existe la opcion");
        break;
            }
       
       }
}

//funciones

void agregarLibros(){
    atributoLibro libro;

    printf("\n Atributos del libro \n");
    printf("\n Escriba nombre del libro \n");
    scanf("%c", libro.nombreLibro);
}

void ventaLibro(){

}

void listaLibros(){

}

void modificarPrecio(){

}

void disponibilidadLibro(){

}