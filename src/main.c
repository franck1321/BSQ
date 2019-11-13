/*
** EPITECH PROJECT, 2019
** l
** File description:
** l
*/

#include "../include/my.h"

int check_map(char *map)
{
    if (!(map[0] >= '0' && map[0] <= '9'))
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

int bsq(char **map, pos_t *p)
{
    int y = 0, x = 0;

    while (p->pos != 0) {
        p->pos = 0;
        while (map[y]) {
            while (map[y][x] != '\0') {
                map[y][x] == '.' ? check_bsq(map, y, x, p) : 0;
                x++;
            }
            x = 0;
            y++;
        }
        y = 0;
        x = 0;
        p->len++;
    }
    p->len -= 1;
    make_square(map, p);
    return (0);
}

int main(int ac, char **av)
{
    char *file;
    pos_t *p = malloc(sizeof(pos_t));
    char **map;

    file = open_file(av[1]);
    if (check_map(file) == 84)
        return (84);
    map = my_str_to_word_array(file);
    p->len = 1;
    p->size_x = count_lenth_of_line(map);
    p->size_y = count_nb_of_line(map);
    p->long_1 = 0;
    p->long_2 = 0;
    p->pos = 1;
    bsq(map, p);
    free(map);
    free(p);
    return (0);
}