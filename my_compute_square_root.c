/*
** EPITECH PROJECT, 2020
** my_compute_square_root
** File description:
** Task05
*/

#include "my.h"

int my_compute_square_root(int nb)
{
    int i = 0;

    while (i * i != nb) {
        if (i * i > nb || nb < 0) {
            return (0);
        }
        i++;
    }
    return (i);
}
