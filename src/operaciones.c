#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"


// sumar() Agarra el valor A, lo suma con el valor B y retorna un entero

int sumar(int a, int b)
{
return a + b;
}


// restar() Agarra el valor A, lo resta por el valor B y retornaun entero

int restar(int a, int b)
{
return a - b;
}



// multip() Agarra el valor A, lo multiplica por el valor B y retorna un entero

int multip(int a, int b)
{
return a * b;
}


/* dividir() Agarra el valor A, lo divide por B, y retorna un flotante, excepto cuando el valor B es 0,
 por lo tanto, da un mensaje de error y el resultado se modifica por 0 */

float dividir(int a, int b)
{

	float rDivision;

	if(b == 0)
	{

		printf("   ### NO SE PUEDE DIVIDIR POR 0 ###");
		rDivision = 0;

	}else
	 {
		 rDivision = (float) a / b;
	 }

	return rDivision;
}


/* factorial() Agarra un valor, lo multiplica hasta alcanzar su valor y retorna un entero, excepto cuando el valor sea negativo,
 en este caso, da un mensaje de error y el resultado se modifica por 0 */

int factorial(int a)
{
    int rFacto = 1;

    if(a < 0)
    {
    	printf("   ### NO SE PUEDE SACAR FACTORIALES NEGATIVOS ###\n");
    	rFacto = 0;
    }else
     {
    	for (int i = 1; i <= a; i++)
    	{
    	   rFacto *= i;
    	}

     }


    return rFacto;

}
