// RiosRodriguezDaniel 372800
// 8-sep-23
/*
3.- Función en "C" que genere N (35) cantidad de números 
(100 -200), desplegar al final el número mayor y el número menor. 
 */
// R.R.D_act5_3_932
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int n=35;
    int ran[n],i,mayor=0,menor=200;
    for(i=0;i<=34;i++)
    {
    ran[i] = (rand() % 101)+100;
    printf("%d, ",ran[i]);
    if(ran[i]>mayor)
    {
        mayor=ran[i];
    }
    if(ran[i]<menor)
    {
        menor=ran[i];
    }
    }
    printf("\nnumero mayor=%d\nnumero menor=%d",mayor,menor);
    return 0;
}