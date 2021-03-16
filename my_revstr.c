/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** task03
*/

#include "my.h"

char *my_revstr(char *str)
{
    int i = 0;
    char temp;
    int y = 0;

    for (; str[i] != '\0'; i++);
    i--;
    for (; i != y; y++, --i) {
        temp = str[i];
        str[i] = str[y];
        str[y] = temp;
    }
    str[y + 1] = '\0';
    return (str);
}
