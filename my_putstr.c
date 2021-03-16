/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** lib
*/

#include "my.h"

int my_putstr(char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++)
        my_putchar(str[i]);
    return (0);
}

int my_putstr_error(char *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++)
        my_put_error(str[i]);
    return (0);
}