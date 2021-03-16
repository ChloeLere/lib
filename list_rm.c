/*
** EPITECH PROJECT, 2020
** list_rm
** File description:
** rm list
*/

#include "my.h"

list_t rm_element_first(list_t list)
{
    if (list->size == 1 && list != NULL)
        return (NULL);
    list->begin = list->begin->next;
    list->begin->prev = NULL;
    list->size--;
    return (list);
}

list_t rm_element_end(list_t list)
{
    if (list->size == 1 && list != NULL)
        return (NULL);
    list->end = list->end->prev;
    list->end->next = NULL;
    list->size--;
    return (list);
}

void rm_all(list_t list)
{
    while (list->size >= 0)
        rm_element_end(list);
}
