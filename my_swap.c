/*
** EPITECH PROJECT, 2020
** my_swap
** File description:
** swap two int
*/

#include "my.h"

void my_swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
