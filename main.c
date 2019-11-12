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
    p->len = 4;
    if ((p->size_x - x) >= p->len && (p->size_y - y) >= p->len) {
        if (check_square(map, y, x, p) == 0) {
            p->long_2 = p->len; 
            if (p->long_1 < p->long_2) {
                p->pos_x = x;
                p->pos_y = y;
                p->long_1 = p->long_2;
            }
        }
    } else {
        return;
    }
    
}

int bsq(char **map, pos_t *p)
{
    int y = 0, x = 0, check = 0;

    p->size_x = count_lenth_of_line(map);
    p->size_y = count_nb_of_line(map);
    p->long_1 = 0;
    p->long_2 = 0;
    while (map[y]) {
        while (map[y][x] != '\0') {
            if (map[y][x] == '.')
                check_bsq(map, y, x, p);
            x++;
        }
        x = 0;
        y++;
    }
    map[p->pos_y][p->pos_x] = 'E';
    print_tab(map);
    return (0);
}

int main(int ac, char **av)
{
    char *file;
    pos_t *p = malloc(sizeof(pos_t));

    file = open_file(av[1]);
    if (check_map(file) == 84)
        return (84);
    bsq(my_str_to_word_array(file), p);
    return (0);
}