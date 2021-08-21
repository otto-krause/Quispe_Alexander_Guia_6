#include <stdio.h>
int main()
{
    int n;
    printf("Introdusca un numero del 1 al 7: ");
    scanf("%i", &n);
    switch (n)
    {
    case 1:
        printf("Lunes");
        break;
    case 2:
        printf("Martes");
        break;
    case 3:
        printf("Miercoles");
        break;
    case 4:
        printf("Jueves");
        break;
    case 5:
        printf("Viernes");
        break;
    case 6:
        printf("Sabado");
        break;
    case 7:
        printf("Domingo");
        break;
    default:
        printf("No introdujo un numero correcto");
        break;
    }
}