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

//puntero
void precioNuevo(double* precioActual){
    double nuevo = libro.precioLibro;
    *precioActual = nuevo;
}

//clase principal 
int main(){

menu();
agregarLibros();
ventaLibro();
listaLibros();
modificarPrecio();
disponibilidadLibro();
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
          ventaLibro();
        break;
    case 3:
         listaLibros();
        break;
    case 4:
        modificarPrecio();
        break;    
    case 5:
        disponibilidadLibro();
    break;
    case 6:
         exit(0);
        break;                                 
    default:
        printf("No existe la opcion");
        break;
            }
       
       }
}

//funciones
atributoLibro libro;
void agregarLibros(){
   // atributoLibro libro; 
    printf("\n Atributos del libro \n");
    printf("\n Escriba precio del libro \n");
    scanf("%lf", &libro.precioLibro);
    printf("\n Escriba estado del libro en rango del 1 al 10\n");
    scanf("%i", &libro.estadoLibro);
    printf("\n Escriba nombre del libro \n");
    scanf("%s", &libro.nombreLibro);
}

void ventaLibro(){

}

void listaLibros(){


printf("\n Nombre del libro %s \n", libro.nombreLibro);

}

void modificarPrecio(){
//usare punteros
printf("\n Precio del libro actual %lf \n", libro.precioLibro);
printf("\n Ingrese el precio nuevo \n");
scanf("%lf", libro.precioLibro);
precioNuevo(&libro.precioLibro);
printf("\n El nuevo precio del libro es: %lf \n ", libro.precioLibro);

}


void disponibilidadLibro(){

}