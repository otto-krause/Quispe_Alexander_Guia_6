#include <stdio.h>
int main()
{
    int dia, mes;
    printf("Ingresa el valor de dia: ");
    scanf("%i", &dia);
    printf("Ingresa el valor de mes: ");
    scanf("%i", &mes);
    if (dia >= 1 && dia <= 31)
    {
        switch (mes)
        {
        case 1:
            if (dia >= 1 && dia <= 20)
            {
                printf("Capricornio\n");
                break;
            }
            else
            {
                printf("Aquario\n");
                break;
            }
        case 2:
            if (dia >= 1 && dia <= 29)
            {
                if (dia >= 1 && dia <= 19)
                {
                    printf("Aquario\n");
                    break;
                }
                else
                {
                    printf("Piscis\n");
                    break;
                }
            }
            else
            {
                printf("Fecha incorrecta");
                break;
            }
        case 3:
            if (dia >= 1 && dia <= 20)
            {
                printf("Piscis\n");
                break;
            }
            else
            {
                printf("Aries\n");
                break;
            }
        case 4:
            if (dia >= 1 && dia <= 20)
            {
                printf("Aries\n");
                break;
            }
            else
            {
                printf("Tauro\n");
                break;
            }
        case 5:
            if (dia >= 1 && dia <= 21)
            {
                printf("Tauro\n");
                break;
            }
            else
            {
                printf("Geminis\n");
                break;
            }
        case 6:
            if (dia >= 1 && dia <= 21)
            {
                printf("Geminis\n");
                break;
            }
            else
            {
                printf("Cancer\n");
                break;
            }
        case 7:
            if (dia >= 1 && dia <= 22)
            {
                printf("Cancer\n");
                break;
            }
            else
            {
                printf("Leo\n");
                break;
            }
        case 8:
            if (dia >= 1 && dia <= 22)
            {
                printf("Leo\n");
                break;
            }
            else
            {
                printf("Virgo\n");
                break;
            }
        case 9:
            if (dia >= 1 && dia <= 22)
            {
                printf("Virgo\n");
                break;
            }
            else
            {
                printf("Libra\n");
                break;
            }
        case 10:
            if (dia >= 1 && dia <= 22)
            {
                printf("Libra\n");
                break;
            }
            else
            {
                printf("Escorpio\n");
                break;
            }
        case 11:
            if (dia >= 1 && dia <= 22)
            {
                printf("Escorpio\n");
                break;
            }
            else
            {
                printf("Sagitario\n");
                break;
            }
        case 12:
            if (dia >= 1 && dia <= 21)
            {
                printf("Sagitario\n");
                break;
            }
            else
            {
                printf("Capricornio\n");
                break;
            }
        default:
            printf("Opción no válida\n");
            break;
        }
    }
    else
    {
        printf("Fecha incorrecta");
    }
}