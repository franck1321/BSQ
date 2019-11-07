/*
** EPITECH PROJECT, 2019
** k
** File description:
** k
*/

#include "../../include/my.h"

char *my_strdup(char const *src)
{
    int size = my_strlen(src);
    int i = 0;
    char *dest;

    dest = malloc(sizeof(char) * (size + 1));
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
