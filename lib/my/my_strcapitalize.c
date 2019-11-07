/*
** EPITECH PROJECT, 2019
** l
** File description:
** l
*/

#include "../../include/my.h"

char *my_strcapitalize(char *str)
{
    int	i = 0;

    if (str[i] >= 'a' && str[i] <= 'z'){
        str[i] = str[i] - 32;
        i++;
    }
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (str[i - 1] == '.' || str[i - 1] == ' ' || str[i - 1] == '?'
            || str[i - 1] == ';' || str[i - 1] == '+' || str[i - 1] == ','
            || str[i - 1] == '-')
                str[i] = str[i] - 32;
        }
        i++;
    }
    return (str);
}
