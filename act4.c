// RiosRodriguezDaniel 372800
// 8-sep-23
/*
4.- Función en "C" que despliegue la tabla de multiplicar de un número dado (número entre el 1 y 20).
Tabla del 5
5 * 1 = 5
5* 2 = 10
5*10=50
*/
// R.R.D_act5_3_932
#include <stdio.h>
int main()
{
    int n, i;
    printf("Ingrese un numero del 1 al 20\n");
    scanf("%d",&n);

    for (i = 1; i <= 10; ++i)
    {
        printf("%d.-\t%d*%d=\t%d\n", i, n, i,n*i);
    }
    return 0;
}