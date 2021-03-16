/*
** EPITECH PROJECT, 2020
** list_add_create
** File description:
** create list and add element
*/

#include "my.h"

list_t create_list(void)
{
    return (NULL);
}

int listlen(list_t list)
{
    if (list == NULL)
        return (0);
    else
        return (list->size);
}

list_t add_element_end(list_t list, void *data)
{
    list_element_t *element = malloc(sizeof(*element));

    element->data = data;
    element->next = NULL;
    element->prev = NULL;
    if (list == NULL) {
        list = malloc(sizeof(*list));
        list->size = 1;
        list->begin = element;
        list->end = element;
    } else {
        list->size++;
        list->end->next = element;
        element->prev = list->end;
        list->end = element;
    }
    return (list);
}

list_t add_element_first(list_t list, void *data)
{
    list_element_t *element = malloc(sizeof(*element));

    element->data = data;
    element->next = NULL;
    element->prev = NULL;
    if (list == NULL) {
        list = malloc(sizeof(*list));
        list->size = 1;
        list->begin = element;
        list->end = element;
    } else {
        list->size++;
        list->begin->prev = element;
        element->next = list->begin;
        list->begin = element;
    }
    return (list);
}