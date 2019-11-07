/*
** EPITECH PROJECT, 2019
** my_str_to_word_array
** File description:
** functio split string
*/

#include "../../include/my.h"

void put_in_array(char const *str, char **av)
{
    int ac = 0;
    int i = 0;
    int lenght = 0;
    int y = 0;

    for (i = 0; str[i] != '\0'; i++, y = 0, ac++, lenght = 0) {
        for (;(str[i] >= 'a' && str[i] <= 'z') ||
        (str[i] >= 'A' && str[i] <= 'Z') ||
        (str[i] >= 48 && str[i] <= 57); lenght++, i++) {
        }
        av[ac] = malloc(sizeof(char) * lenght);
        i = i - lenght;
        for (;(str[i] >= 'a' && str[i] <= 'z') ||
        (str[i] >= 'A' && str[i] <= 'Z') ||
        (str[i] >= 48 && str[i] <= 57); y++, i++) {
            av[ac][y] = str[i];
        }
    }
}

char **my_str_to_word_array(char const *str)
{
    int ac = 0;
    int i = 0;
    char **av = NULL;

    for (i = 0; str[i] != '\0'; i++) {
        while ((str[i] >= 'a' && str[i] <= 'z') ||
        (str[i] >= 'A' && str[i] <= 'Z') ||
        (str[i] >= 48 && str[i] <= 57)) {
            i++;
        }
        ac++;
    }
    av = malloc(sizeof(char*) * ac);
    put_in_array(str, av);
    return (av);
}
