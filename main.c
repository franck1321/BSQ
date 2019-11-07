/*
** EPITECH PROJECT, 2019
** l
** File description:
** l
*/

#include "include/my.h"



int check_map(char *map)
{
    if (!(map[0] >= '0' && map[0] <='9'))
        return (84);
    if (check_one_line(map) == 84)
        return (84);
    if (check_nb_of_line(map) == 84)
        return (84);
    if (check_lenth_of_line(map) == 84)
        return (84);
    if (check_char(map) == 84)
        return (84);
    return (0);
}

int main(int ac, char **av)
{
    char *file;

    file = open_file(av[1]);
    if (check_map(file) == 84)
        return (84);
    return (0);
}