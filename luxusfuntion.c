#include <stdio.h>

#include "meinschmarren.h"

float gehalt=0.0;

void copyRight(int j)
{
    printf("*******************************\n");
    printf(" Copyright %d by HTL Wien 10\n", j);
    printf("*******************************\n");
}

void printReichtum(float geld)
{
    int i;
    for(i=0; i<10; i++)
        printf("$$$ Bling %.2f Euro $$$\n", geld);
    printf("Gehalt: %.2f Euro\n", gehalt);
}
