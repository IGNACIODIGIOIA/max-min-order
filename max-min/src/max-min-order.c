/*
 ============================================================================
 Name        : max-min-order.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define  NUMEROS 5

int main(void) {
setbuf(stdout,NULL);

int array[NUMEROS]= {3,65,12,54,7};
int auxMax = array[0];
int auxindiceMax=0;
int auxMin = array[0];
int auxindiceMin=0;

for (int i=1; i<NUMEROS; i++) //ordenamiento maximo
{
	if(array[i]>auxMax)
	{
		auxMax=array[i];
		auxindiceMax=i;
	}
}

printf("auxMax= %d\n",auxMax);
printf("IndiceMax= %d\n",auxindiceMax);


for (int i=1; i<NUMEROS; i++) //ordenamiento minimo
{
	if(array[i]<auxMin)
	{
		auxMin=array[i];
		auxindiceMin=i;
	}
}

printf("auxMin= %d\n",auxMin);
printf("IndiceMin= %d\n",auxindiceMin);

return EXIT_SUCCESS;

}


