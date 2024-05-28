/*
** EPITECH PROJECT, 2023
** C-Utils
** File description:
** my_putchar.c
*/

#include "cutils.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
