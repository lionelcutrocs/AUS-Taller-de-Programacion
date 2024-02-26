#include <stdio.h>
#include <string.h>

int main () {

 char dia [10];
 int i;

    printf ("Ingrese el dia: ");
    scanf ("%s\n", &dia );

 printf ("%d\n", dia [i] );

    switch ( dia [i] )
    {
    case 1:
        printf ("1. %d\n", dia [i] );
        break;
    case 2:
        printf ("2- %d\n", dia [i] );
    default:
        break;
    }
    






    return 0;
}