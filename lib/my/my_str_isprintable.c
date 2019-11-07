/*
** EPITECH PROJECT, 2019
** q
** File description:
** q
*/

#include "../../include/my.h"

int my_str_isprintable(char const *str)
{
    int i = 0;

    if (str == NULL)
        return (1);
    while (str[i] != '\0') {
        if (str[i] >= 0 && str[i] < 127)
            i++;
        else
            return (0);
    }
    return (1);

}
