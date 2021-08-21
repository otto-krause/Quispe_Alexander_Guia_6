#include <stdio.h>
int main()
{
    char n;
    printf("Introdusca una nota: ");
    scanf("%c", &n);
    switch (n)
    {
    case 'a':
    case 'A':
        printf("Excelente");
        break;
    case 'b':
    case 'B':
        printf("Buena");
        break;
    case 'c':
    case 'C':
        printf("Regular");
        break;
    case 'd':
    case 'D':
        printf("Suficiente");
        break;
    case 'f':
    case 'F':
        printf("No Suficiente");
        break;
    default:
        printf("No introdujo una nota correcta");
        break;
    }
}