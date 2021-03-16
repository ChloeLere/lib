/*
** EPITECH PROJECT, 2020
** my_strncmp
** File description:
** my_strncmp
*/

#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;
    int y = 0;

    while (s1[i] != '\0') {
        i++;
    }
    while (s2[y] != '\0') {
        y++;
    }
    if (s1[i] != s2[y] && y < n) {
        if (s1[i] < s2[y]) {
            return (-1);
        }
        if (s1[i] > s2[y]) {
            return (1);
        }
        if (s1[i] == s2[y]) {
            return (0);
        }
    }
}
