/*
** EPITECH PROJECT, 2020
** my_is_prime
** File description:
** number prime
*/

#include "my.h"

int my_is_prime(int nb)
{
    for (int i = 2; i < nb; i++) {
        if (nb % i == 0) {
            return (0);
        }
        return (1);
    }
}
