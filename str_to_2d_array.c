/*
** EPITECH PROJECT, 2021
** str_to_2d_array
** File description:
** char * to char **
*/

#include "my.h"

char **char_to_2dchar(char *argv)
{
    int nbr_space = find_nb_char(argv) + 1;
    char **str = malloc(sizeof(char *) * (nbr_space + 1));
    data_t data = {0, 0, 0, 0};

    for (data.x = 0; nbr_space > 0; nbr_space--, data.x++) {
        data.nbr = find_size(argv, data.c);
        str[data.x] = malloc(sizeof(char) * (data.nbr + 2));
        for (data.y = 0; argv[data.c] != ' ' && argv[data.c] != '\n';
        data.y++, data.c++)
            str[data.x][data.y] = argv[data.c];
        data.c++;
        str[data.x][data.y] = '\0';
    }
    str[data.x] = NULL;
    return (str);
}

int find_size(char *argv, int c)
{
    int size = 0;

    for (; argv[c] != ' ' && argv[c] != '\0'; size++, c++);
    return (size);
}

int find_nb_char(char *argv)
{
    int c = 0;
    int size = 0;

    for (; argv[c] != '\0'; c++) {
        if (argv[c] == ' ')
            size++;
    }
    return (size);
}

void c_free(char **str, int size)
{
    int c = 0;

    for (; size >= 0; size--, c++)
        free(str[c]);
    free(str);
}