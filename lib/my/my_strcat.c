/*
** EPITECH PROJECT, 2019
** l
** File description:
** l
*/

#include "../../include/my.h"

char *my_strcat(char *dest, char const *src)
{
    int i = my_strlen(dest) + 1;
    int y = my_strlen(src) + 1;
    int l = 0;
    char *tmp = NULL;

    dest = malloc(sizeof(char) * (i + y));
    i = 0;
    while (tmp[i] != '\0') {
        dest[i] = tmp[i];
        i++;
    }
    while (src[l] != '\0') {
        dest[i] = src[l];
        l++;
        i++;
    }
    return (dest);
}
