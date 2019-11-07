/*
** EPITECH PROJECT, 2019
** l
** File description:
** l
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void my_putchar(char c);

int my_strcmp(char *s1, char *s2)
{
    int i = 0;

    while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0')) {
        i = i + 1;
    }
    return (s1[i] - s2[i]);
}
