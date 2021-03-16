/*
** EPITECH PROJECT, 2020
** my_isneg
** File description:
** function
*/

#include "my.h"

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
}
