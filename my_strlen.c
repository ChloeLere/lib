/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** calc len
*/

#include "my.h"

int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    return (i);
}

int my_nbrlen(int str)
{
    int c = 0;

    for (; str > 0; str /= 10)
        c++;
    return (c);
}

int my_doublestrlen(char **str)
{
    int c = 0;

    for (; str[c] != '\0'; c++);
    return (c);
}