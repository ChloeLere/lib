/*
** EPITECH PROJECT, 2020
** my_sort_int_array
** File description:
** lib
*/

void my_sort_int_array(int *array, int size)
{
    int i = 0;
    int y = 0;
    int c = 0;

    while (i < size) {
        while (y < size) {
            if (array[i] < array[y]) {
                c = array[i];
                array[i] = array[y];
                array[y] = c;
            }
            y++;
        }
        i++;
        y = 0;
    }
}
