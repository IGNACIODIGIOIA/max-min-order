/*
 ============================================================================
 Name        : ordenamiento.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funcion.h"

#define NUMEROS 5

int main(void) {
	setbuf(stdout,NULL);
	int array[NUMEROS]= {3,65,12,54,7};

	if(array!= NULL)
		{
			arr_OrdenamientoBubbleBobble(array,NUMEROS);
		}

for(int i=0;i<NUMEROS;i++)
{
	printf("-%d",array[i]);
}

	return EXIT_SUCCESS;
}
