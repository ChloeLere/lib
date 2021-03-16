/*
** EPITECH PROJECT, 2020
** my_str_isprintable
** File description:
** printable characters
*/

#include "my.h"

int my_str_isprintable(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] <= 31 || str[i] == 127)
            return (0);
    }
    return (1);
}
