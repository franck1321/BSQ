/*
** EPITECH PROJECT, 2019
** l
** File description:
** l
*/

#include "../../include/my.h"

int check(char *str, char const *to_find, int i)
{
    int y = 0;

    while (to_find[y] != '\0') {
        if (str[i] == to_find[y]) {
            y++;
            i++;
        } else
            return (1);
    }
    return (0);
}

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int y = 0;
    int check1 = 1;
    char *p = 0;

    while (str[i] != '\0') {
        if (str[i] == to_find[0] && check1 == 1) {
            check1 = check(str, to_find, i);
            if (check1 == 0)
                y = i;
        }
        i++;
    }
    if (y != 0) {
        p = str + y;
        return (p);
    } else
        return (NULL);
}
