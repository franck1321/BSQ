/*
** EPITECH PROJECT, 2019
** l
** File description:
** l
*/

#include "../../include/my.h"

char *my_revstr(char *str)
{
    int c = my_strlen(str) -1;
    int a = 0;
    char temp;

    while (c > a) {
        temp = str[c];
        str[c] = str[a];
        str[a] = temp;
        c--;
        a++;
    }
    return (str);
}
