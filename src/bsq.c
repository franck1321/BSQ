/*
** EPITECH PROJECT, 2019
** l
** File description:
** l
*/

#include "../include/my.h"

int count_lenth_of_line(char **map)
{
    int x = 0;

    for (; map[1][x] != '\0'; x++);
    return (x);
}

int count_nb_of_line(char **map)
{
    int y = 1;

    for (; map[y]; y++);
    return (y);
}

int check_square(char **map, int y, int x, pos_t *p)
{
    int x_1 = 0, y_1 = 0, x_2 = x;

    while (y_1 != p->len) {
        while (x_1 != p->len) {
            if (map[y][x] == 'o')
                return (84);
            x++;
            x_1++;
        }
        x = x_2;
        x_1 = 0;
        y++;
        y_1++;
    }
    return (0);
}

void check_bsq(char **map, int y, int x, pos_t *p)
{
    if ((p->size_x - x) >= p->len && (p->size_y - y) >= p->len) {
        if (check_square(map, y, x, p) == 0) {
            p->pos += 1;
            p->long_2 = p->len;
            if (p->long_2 > p->long_1) {
                p->pos_x = x;
                p->pos_y = y;
                p->long_1 = p->long_2;
            }
        }
    }
}

void make_square(char **map, pos_t *p)
{
    int x_max = p->pos_x + (p->len - 1), y_max = p->pos_y + (p->len - 1);
    int y = p->pos_y, x = p->pos_x;

    while (y != y_max) {
        while (x != x_max) {
            map[y][x] = 'x';
            x++;
        }
        x = p->pos_x;
        y++;
    }
    print_tab(map);
}