/*
 ============================================================================
 Name        : TP.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//s

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "arrayEmployees.h"

# define TAM  1000

int main()
{
    char confirmar;
    char seguir = 's';

    int siguienteId = 1;

    int flagAlta = 0;

    int respuesta;

    int opcion;


    eEmpleado lista[TAM];



    if(initEmployees(lista, TAM))
    {
        printf("Fallo al inicializar");
    }
    else
    {
          printf("Inicializacion exitosa!\n");
    }


    do
    {
    switch(menu())
        {
        case 1:
            if(addEmployees(lista, TAM, siguienteId))
            {
                printf("No se pudo realizar el alta.");
            }
            else
            {
              siguienteId++;
              printf("Alta exitosa.\n");
              flagAlta = 1;
            }

        break;

        case 2:
            if(flagAlta == 1)
            {
               respuesta = modificarEmpleado(lista, TAM);
            if (respuesta == 0)
            {
                printf("Se ha modificado con exito!!!\n\n");
            }
            else if (respuesta == 2)
            {
                printf("Modificacion cancelada por el usuario...\n\n");
            }
            else
            {
               printf("Hubo un problema al intentar realizar la modificacion...\n\n");
            }
            }
             else
              {
                printf("Primero debe realizar el alta\n");
              }
        break;

        case 3:
            if (flagAlta == 1 ) {
            respuesta = removeEmployee(lista, TAM);
            if (respuesta == 0)
            {
                printf("Se ha realizado la baja con exito!!!\n\n");
            }
            else if (respuesta == 2)
                {
                 printf("Baja cancelada por el usuario...\n\n");
                }
            else {
                   printf("Hubo un problema al intentar realizar la baja...\n\n");
                 }
            }
            else
            {
                printf("Primero realizar el alta \n");
            }

            break;

        case 4:
           if (flagAlta == 1)
            {
                system("cls");

                printf("***INFORME*** \n\n");
                printf("1) Lista de empleados \n");
                printf("2) Informe de salario \n");
                printf("Ingrese una opcion: ");

                fflush(stdin);

                scanf("%d", &opcion);

                if(opcion == 1 && !sortEmployees(lista, TAM, 1 ))
                {
                printEmployees(lista, TAM);
                }
                else if (opcion == 2 && !sortEmployees(lista, TAM, 1))
                {
                 informarSalario (lista, TAM);
                }
                else
                {
                     printf("Opcion no valida \n");
                }
            }else
             {

                printf("Primero debe realizar el alta \n");
             }

         break;
        case 5:
            printf("Confirma salida?  ('s'/'n') \n");
            fflush(stdin);
            scanf("%c",&confirmar);
            if(confirmar == 's')
            {
                seguir = 'n';
            }
            break;
        default:
            printf("Ingresar un caracter valido\n\n");
        }
        system("pause");

} while(seguir == 's');

    return 0;
}
