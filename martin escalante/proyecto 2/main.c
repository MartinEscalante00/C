#include <stdio.h>
#include <stdlib.h>

int main()
{


    /*se ingresan numeros,(ser disintos a 0 ) no se sabe cuantos,
    se pide mostrar: .Cantidad de pares e impares.
    . porcentaje de numeros positivos y negativos.
    . Maximo y minimo
    .Maximo numero par
    .Cantidad de numeros comprendidos entre 125 y 236
    */

    int numeros;
    char rta;
    int contPares= 0;
    int contImp= 0;
    int ContadorNeg =0;
    int contadorPos =0;
    int contadorTotales;
    float porcentajePos;
    float porcentajeNeg;

    int maximo;
    int minimo;
    int flag =0;
    int flagPar =0;
    int maximoPar=0;





    do
    {
        printf("\n Ingrese un numero:");
        scanf("%d", &numeros);
        while(numeros == 0)
        {
            printf("\n Reingrese un numero:");
            scanf("%d", &numeros);
        }

        if(numeros%2==0)
        {
            contPares++;

        }
        else
            {
                contImp++;
            }

         if(numeros>0)
         {
             contadorPos++;
         }
         else
        {
                ContadorNeg++;
        }

        if(flag == 0 )
        {
            maximo= numeros;
            minimo= numeros;
            flag= 1;

        }
        else
        {
            if(numeros<minimo)
            {
                minimo= numeros;
            }
            if(numeros>maximo)
            {
                maximo=numeros;
            }
        }






        printf("\n Desea continuar? ");
        rta= getche();


    }while(rta !='n');

    contadorTotales= contadorPos+ContadorNeg;
    porcentajePos= (float)(contadorPos *100) / contadorTotales;
    porcentajeNeg= 100 -porcentajePos;



    printf("\n La cantidad de pares es %d", contPares);
    printf("\n La cantidad de impares es %d", contImp);
    printf("\n el porcenaje de positivo es %f", porcentajePos);
    printf("\n El porcentaje de negaivos es %f", porcentajeNeg);
    printf("\n El maximo es: %d", maximo);
    printf("\n El minimo es: %d", minimo);



    /*printf("\n la cantidad de numeros positivos son %d", contadorPos);
    printf("\n la cantidad de numeros negativos son %d", ContadorNeg);
    */




    return 0;
}
