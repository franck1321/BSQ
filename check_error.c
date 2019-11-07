/*
** EPITECH PROJECT, 2019
** l
** File description:
** l
*/

#include "include/my.h"

int check_char(char *map)
{
    int i = 0;

    for (; map[i] != '\n'; i++);
    i++;
    while (map[i] != '\0') {
        if (map[i] == '.' || map[i] == 'o' || map[i] == '\n')
            i++;
        else
            return (84);
    }
    return (0);
}

int check_lenth_of_line(char *map)
{
    int i = 0, len_o = 0, temp = 0, len = 0;

    for (; map[i] != '\n'; i++);
    i++;
    temp = i;
    for (; map[i] != '\n'; i++);
    len_o = i - temp;
    i++;
    for (; map[i] != '\0'; i++) {
        len++;
        if (map[i] == '\n') {
            len--;
            if (len != len_o)
                return (84);
            else
                len = 0;
        }
    }
    return (0);
}

int check_one_line(char *map)
{
    int i = 0;

    while (map[i] != '\0') {
        i++;
    }
    if ((map[i - 1] >= '0' && map[i - 1] <= '9'))
        return (84);
    if (map[i - 1] == '\n') {
        if (map[i - 2] >= '0' && map[i - 2] <= '9')
            return (84);
    }
    return (0);
}

char *get_nb_line(char *map)
{
    int i = 0, y = 0;
    char *nb;

    for (; map[i] != '\n'; i++);
    nb = malloc(sizeof(char) * (i + 1));
    if (nb == NULL)
        return (NULL);
    for (; y != i; y++) {
        nb[y] = map[y];
    }
    return (nb);
}

int check_nb_of_line(char *map)
{
    int i = 0, y = 0;
    int nb_line = my_getnbr(get_nb_line(map));

    for (; map[i] != '\n'; i++);
    i++;
    for (; map[i] != '\0'; i++) {
        if (map[i] == '\n')
            y++;
    }
    if (y != nb_line)
        return (84);
    return (0);
}