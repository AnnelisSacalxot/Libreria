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
    bool estadoLibro;
}atributoLibro;
 

//declarando funcion
void menu();
void agregarLibros(atributoLibro libro);


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
      void agregarLibros(libro);
        break;
    case 2:
        //resta(primerN, segundoN);
        break;
    case 3:
        //multiplicacion(primerN,segundoN);
        break;
    case 4:
        //division(primerN, segundoN);
        break;    
    case 5:
        
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
void agregarLibros(atributoLibro libro){

    

printf("\n Atributos del libro \n");
printf("\n Escriba nombre del libro \n");
 scanf("%c", libro.nombreLibro);

};