/*
 * funcion.c
 *
 *  Created on: 11 abr. 2021
 *      Author: Santiago
 */
#include <stdio.h>
#include <stdlib.h>

int arr_OrdenamientoBubbleBobble(int* array, int limite)
{
	int flagswap;
	int aux;
	int j = 0;
	int retorno = -1;
	if(array != NULL && limite > 0)
	{
		retorno = 0;
		do{
			flagswap = 0;
			limite--;
			for(int i=0;i<limite;i++)
			{
				if(array[i]>array[i+1])
				{
					aux= array[i];
					array[i]=array[i+1];
					array[i+1]=aux;
					flagswap =1;
					j++;
				}
			}
			}while(flagswap != 0);

	}

		return retorno;
}
