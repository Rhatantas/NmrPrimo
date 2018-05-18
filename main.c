#include <stdio.h>
#include <stdlib.h>
int main()
{
    int nmr, flag = 1, contador;
    printf("Escolha um numero (>= 1): ");
    scanf("\n%i", &nmr);
    if (nmr <= 0)
        printf("ERRO!. \n");
    else
    {
        if(nmr >= 4)
        {
            contador = 2;
            while(contador <= nmr / 2 && Flag == 1)
            {
                if (nmr % contador == 0)
                flag = 0;
                contador++;
            }
        }
        if (flag == 0)
            printf("Numero: %i Nao e primo. \n", nmr);
        else
            printf("Numero: %i e primo. \n", nmr);
    }
    return 0;
}
