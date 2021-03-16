/*
** EPITECH PROJECT, 2020
** my
** File description:
** functions in libmy.a
*/

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <signal.h>
#include <sys/types.h>
#include <signal.h>
#include <string.h>
#include <stdio.h>
#include <bits/sigaction.h>
#include <ucontext.h>
#include <sys/wait.h>
#include <spawn.h>
#include <sys/select.h>
#include <ncurses.h>
#include <curses.h>

typedef struct list_element_s
{
    void *data;
    struct list_element_s *next;
    struct list_element_s *prev;
}list_element_t;

typedef struct list_s
{
    int size;
    struct list_element_s *begin;
    struct list_element_s *end;
}*list_t;

typedef struct data_s
{
    int x;
    int y;
    int c;
    int nbr;
}data_t;

typedef struct inventory_s
{
    int nb_bw;
    int nbr_box;
    int nbr_win;
    int nbr_block;
}*inventory_t;
typedef struct perso_s
{
    int posx;
    int posy;
    int wsizex;
    int wsizey;
    char **map;
    char **origin_map;
    char *buffer;
    int lose;
    inventory_t inv;
}*perso_t;


void my_putchar(char c);
void my_put_error(char c);
int my_putstr(char const *str);
int my_putstr_error(char *str);
int my_put_nbr(int nb);
int my_strlen(char const *str);
int my_nbrlen(int str);
int my_doublestrlen(char **str);
int my_put_nbr_pr(int nb);
int my_getnbr(char const *str);
int my_getnbr_with_i(char const *str, int i);
int my_printf(char *s, ...);
void my_put_nbr_oct(int nb);
void my_put_nbr_uns(unsigned int nb);
void check_string(char *type, va_list argv);
void check_int(char *type, va_list argv);
void check_char(char *type, va_list argv);
int check_other(char *type, va_list argv);
void convert(va_list argv, int base);
void convert_hexa_lower(va_list argv);
void convert_hexa_upper(va_list argv);
void convert_hexa_lower_int(int nbr, va_list argv);
void convert_hexa_lower_long(unsigned long nbr, va_list argv);
void free_all(char **to_free, int nbr_loop);
list_t create_list(void);
int listlen(list_t list);
list_t add_element_end(list_t list, void *data);
list_t add_element_first(list_t list, void *data);
void display_list_1d_arr(list_t list, char *elem_sep);
void display_list_char(list_t list, char *elem_sep);
void display_list_int(list_t list, char *elem_sep);
list_t rm_element_first(list_t list);
list_t rm_element_end(list_t list);
void rm_all(list_t list);
int edit_add(char *str, va_list argv, int add);
int space_or_plus(char str, va_list argv, int add);
void display_all_char(char *str);
void display_p(char *str, va_list argv);
void my_put_nbr_long(long nb);
double my_put_float(double nbr);
void my_put_short(short nb);
int load_file_in_mem(char const *filepath);
char *open_file(char *filepath);
int open_file_int(char *filepath);
int add_zero_or_space(char *str, va_list argv, int add);
void space_char(va_list argv, int nbr);
void zero_or_space_int(char str, va_list argv, int nb_z);
char **char_to_2dchar(char *argv);
int find_size(char *argv, int c);
int find_nb_char(char *argv);
int my_isneg (int n);
void c_free(char **str, int size);
int my_compute_square_root(int nb);
void my_sort_int_array(int *array, int size);
int my_find_prime_sup(int nb);
int my_is_prime(int nb);
char *my_revstr(char *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
char *my_strcpy(char *dest, char const *src);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
int convert_in_all_base(int nb, char *base, int mod);
char *int_to_char(int to_conv);