/*
** EPITECH PROJECT, 2020
** list_display
** File description:
** display list
*/

#include "my.h"

void display_list_1d_arr(list_t list, char *elem_sep)
{
    list_element_t *for_display;

    if (list == NULL)
        return;
    for_display = list->begin;
    while (for_display->next != NULL) {
        my_printf("%s%s", for_display->data, elem_sep);
        for_display = for_display->next;
    }
    my_printf("%s%s", for_display->data, elem_sep);
}

void display_list_char(list_t list, char *elem_sep)
{
    list_element_t *for_display;

    if (list == NULL)
        return;
    for_display = list->begin;
    while (for_display->next != NULL) {
        my_printf("%c%s", for_display->data, elem_sep);
        for_display = for_display->next;
    }
    my_printf("%c%s", for_display->data, elem_sep);
}

void display_list_int(list_t list, char *elem_sep)
{
    list_element_t *for_display;

    if (list == NULL)
        return;
    for_display = list->begin;
    while (for_display->next != NULL) {
        my_printf("%d%s", for_display->data, elem_sep);
        for_display = for_display->next;
    }
    my_printf("%d%s", for_display->data, elem_sep);
}