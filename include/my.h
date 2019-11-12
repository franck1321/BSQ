/*
** EPITECH PROJECT, 2019
** l
** File description:
** l
*/


#ifndef MY_H
#define MY_H

/* Fonction Lib/My + Lib */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
#include <fcntl.h>

typedef struct position {
    int pos_x;
    int pos_y;
    int long_1;
    int long_2;
    int pos;
    int len;
    int size_x;
    int size_y;
} pos_t;

int my_getnbr(char *str);
int my_isneg(int n);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char *str);
char *my_evil_str(char *str);
void my_sort_int_array(int *array, int size);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
char *my_strcpy(char *dest, char *src);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
int my_strncmp(char *s1, char *s2, int n);
char *my_strncpy(char *dest, char *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
char *my_strdup(char const *str);
char *my_revstr(char *str);
char *open_file(char *filepath);
void put_in_array(char const *str, char **av);
char **my_str_to_word_array(char const *str);
int word_len(const char *str, int i);
int word_count(const char *str);
void print_tab(char **tab);

/* Fonction Du Programe */

int check_char(char *map);
int check_lenth_of_line(char *map);
int check_one_line(char *map);
char *get_nb_line(char *map);
int check_nb_of_line(char *map);

/*         END          */

#endif /* MY_H */

