#include <stdio.h>
int main()
{
    int n;
    printf("Introdusca un numero del 1 al 12: ");
    scanf("%i", &n);
    switch (n)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31");
        break;
    case 2:
        printf("29");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("30");
        break;
    default:
        printf("No introdujo un numero correcto");
        break;
    }
}