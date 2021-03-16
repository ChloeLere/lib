/*
** EPITECH PROJECT, 2021
** free
** File description:
** free char **
*/

#include "my.h"

void free_all(char **to_free, int nbr_loop)
{
    for (int x = 0; nbr_loop > x; x++)
        free(to_free[x]);
    free(to_free);
}