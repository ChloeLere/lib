/*
** EPITECH PROJECT, 2020
** my_strncat
** File description:
** concatenates two strings
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int y = 0;

    while (dest[y] != '\0') {
        y++;
    }
    for (; src[i] != '\0' && i < nb; i++) {
        dest[y + i] = src[i];
    }
    dest[y + i] = '\0';
    return (dest);
}
