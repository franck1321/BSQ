/*
** EPITECH PROJECT, 2019
** m
** File description:
** m
*/

#include "../../include/my.h"

void my_sort_int_array(int *array, int size)
{
    int a = 0;
    int temp = 0;

    while (a != size) {
        if (array[a + 1] && array[a] > array[a + 1]) {
            temp = array[a];
            array[a] = array[a + 1];
            array[a + 1] = temp;
            a = 0;
        } else
            a++;
    }
}
