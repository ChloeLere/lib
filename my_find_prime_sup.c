/*
** EPITECH PROJECT, 2020
** my_find_prime_sup
** File description:
** task07
*/

#include "my.h"

int my_find_prime_sup(int nb)
{
    for (int i = 2; i < nb; i++) {
        while (nb % i == 0) {
            nb = nb + 1;
        }
    }
    return (nb);
}



