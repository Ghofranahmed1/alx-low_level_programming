#include "main.h"
#include<stdio.h>

/**
*main - Entry point
*
*the proggtam is to find if the number is negative or positive
*
*Return: always 0 (suuess)
*
*/

void positive_or_negative(int n)
{
       if (n > 0)
                printf("%d is positive\n", n);
        else if (n == 0)
                printf("%d is zero\n", n);
        else
                printf("%d is negative\n", n);
}

