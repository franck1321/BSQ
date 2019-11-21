/*
** EPITECH PROJECT, 2019
** l
** File description:
** l
*/

#include "../../include/my.h"

void print_tab(char **tab)
{
    int y = 1;

    while (tab[y]) {
        write(1, tab[y], my_strlen(tab[y] + 1));
        write(1, "\n", 1);
        y++;
    }
}