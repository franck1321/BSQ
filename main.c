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

int check_square(char **map, int y, int x, pos *p)
{
    int y_1 = 0, x_1 = 0;

    while (y_1 != p->len) {
        while (x_1 != p->len) {
            if (!(map[y][x]) || map[y][x] == 'o') {
                return (84);
            }
            x++;
            x_1++;
        }
        x = 0;
        x_1 = 0;
        y++;
        y_1++;
    }
    return (0);
}

void check_bsq(char **map, int y, int x, pos *p)
{
    p->len = 2;
    check_square(map, y, x, p) == 0 ? map[y][x] = 'E' : 0;
}

int bsq(char **map)
{
    pos p;
    int y = 0, x = 0, len = 0;

    while (map[y]) {
        while (map[y][x] != '\0') {
            if (map[y][x] == '.')
                check_bsq(map, y, x, &p);
            x++;
        }
        x = 0;
        y++;
    }
    print_tab(map);
    return (0);
}

int main(int ac, char **av)
{
    char *file;

    file = open_file(av[1]);
    if (check_map(file) == 84)
        return (84);
    bsq(my_str_to_word_array(file));
    return (0);
}