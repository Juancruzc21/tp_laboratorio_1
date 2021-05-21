#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "operaciones.h"

int main(void)
{

	setbuf(stdout, NULL);


	char opcion;		//Opcion para ingresar al switch
    char salir = 'n';	//Opcion para terminar el programa


    int numeroUno = 0;
    int numeroDos = 0;


    int flagPrimerNumero = 0;		 // Verifica que el primer numero haya sido ingresado antes de continuar con otras opciones
    int flagSegundoNumero = 0; 		 // Verifica que el segundo numero haya sido ingresado antes de continuar con otras opciones
    int flagOperacion = 0;			 // Verifica que se realice la operacion antes de mostrar los resultados


    int respuestaSuma;
    int respuestaResta;
    int respuestaMultip;
    float respuestaDivi;		// Estas variables son los resultados de todas las operaciones
    int respuestaFactoA;
    int respuestaFactoB;

    do
    {

	system("cls");

    printf("***** MENU DE OPCIONES *****\n\n");
    printf("A. Ingresar primer operando  (X = %d)\n\n", numeroUno);
    printf("B. Ingresar segundo operando  (X = %d)\n\n", numeroDos);             // Menu visual
    printf("C. Calcular operaciones\n\n");
    printf("D. Obtener resultado\n\n");
    printf("E. Salir\n\n");

    fflush(stdin);

    printf("\n\nQue desea hacer?: ");                  // Toma los datos que ingresan al menu
    fflush(stdin);
    scanf("%c", &opcion);

    opcion = tolower(opcion);



    switch(opcion)
        {

        case 'a':
            flagPrimerNumero = 1;
            printf("Ingrese el primer numero: ");
            scanf("%d", &numeroUno);
            											// Se ingresa el primer numero y se guarda en la variable numeroUno
            system("pause");

            fflush(stdin);

            break;


        case 'b':
            flagSegundoNumero = 1;
            printf("Ingrese el segundo numero: ");
            scanf("%d", &numeroDos);
            											// Se ingresa el segundo numero y se guarda en la variable numeroDos
            system("pause");

            fflush(stdin);

            break;


        case 'c':

        flagOperacion = 1;

            if(flagPrimerNumero == 0 || flagSegundoNumero == 0)
            {
                printf("Primero debe ingresar los dos numeros a calcular\n\n");		// Verifica si ambos valores fueron ingresados
            }
            else
            {

            	setbuf(stdout, NULL);

            	fflush(stdout);


            	printf("\n\nSe realizarán estos calculos: ");


            	printf("\n\na. Suma %d + %d ", numeroUno, numeroDos);

                	respuestaSuma = sumar(numeroUno, numeroDos);

                printf("\n\nb. Resta %d - %d ", numeroUno, numeroDos);

                	respuestaResta = restar(numeroUno, numeroDos);					 // Aqui se informan las operaciones que se realizaran y se avisa en caso de error
                																	 // ademas de enviarle los dos numeros a cada funcion para realizar el calculo
                printf("\n\nc. Multiplicacion %d * %d ", numeroUno, numeroDos);		// y guardarse el resultado en las variables "respuestaX()"

                	respuestaMultip = multip(numeroUno, numeroDos);

                printf("\n\nd. Division %d / %d ", numeroUno, numeroDos);

                	respuestaDivi = dividir(numeroUno, numeroDos);

                printf("\n\ne. Factorial %d! & %d!\n ", numeroUno, numeroDos);

                	respuestaFactoA = factorial(numeroUno);
                	respuestaFactoB = factorial(numeroDos);


                fflush(stdin);

            }



            system("pause");
            break;


        case 'd':

        	if(flagOperacion == 0)
        	{
        		printf("Primero debe calcular los resultados\n\n");			// Se verifica que el calculo haya sido efectuado
        	}else
        	 {
            	printf("\n***Los resultados son los siguientes***\n\n");

                printf(" La suma de %d + %d = %d\n ", numeroUno, numeroDos, respuestaSuma);
                printf("La resta de %d - %d = %d\n ", numeroUno, numeroDos, respuestaResta);
                printf("La multiplicacion de %d * %d = %d\n ", numeroUno, numeroDos, respuestaMultip);			// Se muestran los resultados de las operaciones
                printf("La division de %d / %d = %.2f\n ", numeroUno, numeroDos, respuestaDivi);
                printf("Los factoriales de %d! y %d! = %d & %d \n ", numeroUno, numeroDos, respuestaFactoA, respuestaFactoB);

        	 }

            system("pause");
            break;


        case 'e':

            salir = 's';

            printf("Confirma salida? (s = SI// n = NO):  ");
            fflush(stdin);											// En caso de que el usuario seleccione la opcion de salir, se pregunta si confirma dicha seleccion

            salir = getchar();

            break;
        }



    }while(salir == 'n');	// Mientras la respuesta a salir sea NO ('n'), se va a seguir ejecutando el codigo desarrollado.

    return 0;
}
