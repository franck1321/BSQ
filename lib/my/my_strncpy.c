/*
** EPITECH PROJECT, 2019
** l
** File description:
** l
*/

#include "../../include/my.h"

char *my_strncpy(char *dest, char *src, int n)
{
    int i = 0;
    int c = my_strlen(src);

    while (src[i] != '\0' && i < n) {
        dest[i] = src[i];
        i = i + 1;
    }
    if (n > c) {
        dest[i] = '\0';
    }
    return (dest);
}
