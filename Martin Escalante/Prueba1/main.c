#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int ( numeros enteros) (%d)
    float (numeros con coma) (%f)
    char (un caracter) (%c)

    */

    int numero1 = 9;
    float numero2;
    float suma;
    char letra;
    printf("ingrese un numero entero: ");
    scanf("%d", &numero1);
    printf("ingrese un numero decimal: ");
    scanf("%f", &numero2);
    printf("ingrese una letra: ");
    /*
    fflush(stdin);
    scanf("%c", &letra);
    */
    letra = getch();


    suma= numero1+numero2;

    printf("el numero es: %d y el numero flotante %.2f", numero1, numero2);
    printf("\nla suma es %.2f",suma);
    printf("\nla letra es: %c",letra);



    return 0;
}
