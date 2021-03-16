/*
** EPITECH PROJECT, 2020
** my_strcapitalize
** File description:
** capitalizes the first letter
*/

#include "my.h"

char *my_strcapitalize(char *str)
{
    int c_maj = 0;

    for (int c = 0; str[c] != '\0'; c++) {
        if (c_maj == 1) {
            str[c] = str[c] - 32;
        }
        if (str[c] >= 'A' && str[c] <= 'Z' && c_maj == 0) {
            str[c] = str[c] + 32;
        }
        c_maj = 0;
        if (str[c] == 32) {
            c_maj = 1;
        }
    }
    return (str);
}
