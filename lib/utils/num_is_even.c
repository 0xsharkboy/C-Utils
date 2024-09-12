/*
** EPITECH PROJECT, 2024
** C-Utils
** File description:
** num_is_even.c
*/

#include "cutils.h"

bool num_is_even(int num)
{
    return !(num & 1);
}