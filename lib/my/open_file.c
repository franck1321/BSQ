/*
** EPITECH PROJECT, 2019
** l
** File description:
** l
*/

#include "../../include/my.h"

char *open_file(char *filepath)
{
    struct stat st;
    char *buff;
    int len = 0, fd = open(filepath, O_RDONLY);

    if (fd == -1)
        exit(84);
    if (stat(filepath, &st) == -1)
        exit(84);
    len = st.st_size;
    buff = (char *)malloc(sizeof(char) * (len + 1));
    read(fd, buff, len);
    buff[len] = '\0';
    return (buff);
}