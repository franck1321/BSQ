/*
** EPITECH PROJECT, 2019
** my_str_to_word_array
** File description:
** functio split string
*/

#include "../../include/my.h"

int word_len(const char *str, int i)
{
    int cmp;

    cmp = 0;
    while (str[i] && str[i] != '\n') {
        cmp++;
        i++;
    }
    return (cmp);
}

int word_count(const char *str)
{
    int i;
    int cmp;

    i = 0;
    cmp = 1;
    while (str[i]) {
        if (str[i] == '\n')
    	cmp++;
        i++;
    }
    return (cmp);
}

char **my_str_to_word_array(char const *str)
{
    char **tab;
    int i;
    int j;
    int k;

    i = 0;
    j = 0;
    tab = malloc((word_count(str) + 1) * sizeof(char *));
    while (str[i]) {
        k = 0;
        tab[j] = malloc((word_len(str, i) + 1) * sizeof(char));
        while (str[i] && str[i] != '\n')
            tab[j][k++] = str[i++];
        while (str[i] == '\n')
            i++;
        tab[j][k] = '\0';
        j++;
    }
    tab[j] = '\0';
    return (tab);
}
