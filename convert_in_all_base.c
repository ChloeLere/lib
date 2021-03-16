/*
** EPITECH PROJECT, 2021
** convert_in_all_base
** File description:
** convert
*/

#include "my.h"

int convert_in_all_base(int nb, char *base, int mod)
{
    int res = 0;

    if (nb < 0)
        nb *= (-1);
    if (nb >= mod)
        convert_in_all_base(nb / mod, base, mod);
    res = nb % mod;
    return (res);
}
