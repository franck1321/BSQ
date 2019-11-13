/*
** EPITECH PROJECT, 2019
** l
** File description:
** l
*/

#include "../../include/my.h"

void print_tab(char **tab)
{
    int y = 0, x = 0;

    while (tab[y]) {
        while (tab[y][x] != '\0') {
            my_putchar(tab[y][x]);
            x++;
        }
        my_putchar('\n');
        x = 0;
        y++;
    }
}