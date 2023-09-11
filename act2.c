// RiosRodriguezDaniel 372800
// 8-sep-23
/*
2.- Función en "C" que genere 40 números aleatorios entre el 0 y 200,
desplegar los números y la leyenda de cada número si es par o impar ,
la cantidad de los números pares e impares así como la suma de los números
 pares o impares.
 */
// R.R.D_act5_2_932
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int n=4;
    int ran[n], acui = 0, acup = 0, i, par = 0, impar = 0;
    for (i = 0; i <= n; i++)
    {
        ran[i] = (rand() % 200);
        if (ran[i] % 2 == 0)
        {
            acup++;
            printf("%d=%d es par\n", i, ran[i]);
            par = ran[i] + par;
        }
        else
        {
            impar = ran[i] + impar;
            acui++;
            printf("%d=%d es impar\n", i, ran[i]);
            
        }
    }
    printf("impares=%d\npares=%d\n", acui, acup);
    printf("La suma de los numeros imapres=%d\nLa suma de los numeros pares=%d", impar, par);
    return 0;
}