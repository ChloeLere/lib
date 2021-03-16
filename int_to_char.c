/*
** EPITECH PROJECT, 2021
** int_to_char
** File description:
** convert in char
*/

#include "my.h"

char *int_to_char(int to_conv)
{
    char *c = malloc(sizeof(char) * (my_nbrlen(to_conv)));
    int j = 1;
    int l = my_intlen(to_conv) - 1;

    if (to_conv <= 0)
        return ("0");
    for (; l >= 0; l--) {
        c[l] = ('0' + (to_conv / j) % 10);
        j *= 10;
    }
    c[my_intlen(to_conv)] = '\0';
    return (c);
}