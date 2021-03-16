/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** concatenates two strings
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int y = 0;

    while (dest[y] != '\0') {
        y++;
    }
    for (; src[i] != '\0'; i++) {
        dest[y + i] = src[i];
    }
    dest[y + i] = '\0';
    return (dest);
}
