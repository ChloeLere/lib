/*
** EPITECH PROJECT, 2021
** open_file
** File description:
** open file
*/

#include "my.h"

int load_file_in_mem(char const *filepath)
{
    struct stat buff;
    int size = 0;

    stat(filepath, &buff);
    size = buff.st_size;
    return (size);
}

char *open_file(char *filepath)
{
    int fd = 0;
    int memory_area = load_file_in_mem(filepath);
    char *buffer = malloc(sizeof(char) + memory_area);
    int r = 0;

    fd = open(filepath, O_RDONLY);
    r = read(fd, buffer, memory_area);
    close(fd);
    return (buffer);
}

int open_file_int(char *filepath)
{
    int fd = 0;
    int memory_area = load_file_in_mem(filepath);
    char *buffer[memory_area];
    int r = 0;

    fd = open(filepath, O_RDONLY);
    if (fd == -1) {
        my_putstr_error("Error\n");
        return (84);
    }
    r = read(fd, buffer, memory_area);
    if (r == -1) {
        my_putstr_error("Error\n");
        return (84);
    }
    close(fd);
    return (0);
}