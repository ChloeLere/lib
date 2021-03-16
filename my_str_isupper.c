/*
** EPITECH PROJECT, 2020
** my_str_isupper
** File description:
** uppercase alphabetical
*/

#include "my.h"

int my_str_isupper(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (!(str[i] >= 'A' && str[i] <= 'B'))
            return (0);
    }
    return (1);
}
