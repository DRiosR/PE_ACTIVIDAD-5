// RiosRodriguezDaniel 372800
// 8-sep-23
/*
1.- Funcion en C que pida al usaurio el valor de n, y desplegar todos los numeros enteros positivos menores de n en orden descendente.
*/
// R.R.D_act5_1_932
#include <stdio.h>
int main()
{
    int n, num[n], i;
    printf("ingresa el numero limite\n");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        num[i] = i;
    }
    for (i = n;i>= 0; i--)
    {
        printf("%d, ", num[i]);
    }
    return 0;
}