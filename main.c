#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroUno, numeroDos, numeroTres;
    int maximo;
    printf(" ingrese un numero \n" );
    scanf("%d",&numeroUno);
    printf(" ingrese otro numero \n" );
    scanf("%d",&numeroDos);
    printf("ingrese un numero mas \n");
    scanf("%d",&numeroTres);
    if (numeroUno> numeroDos && numeroUno> numeroTres)
    {
        maximo= numeroUno;
    }
    else if(numeroDos>numeroUno && numeroDos> numeroTres)
    {
        maximo=numeroDos;
    }
    else
    {
        maximo=numeroTres;
    }

    printf("el numero es: %d ", maximo );
    return 0;
}
