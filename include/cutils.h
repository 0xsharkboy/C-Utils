/*
** EPITECH PROJECT, 2023
** C-Utils
** File description:
** cutils.h
*/

#pragma once

#include <fcntl.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>

//String manipulation
bool char_is_num(char c);
int my_atoi(char *str);
void my_putchar(char c);
void my_putstr(char *str);
char *my_strcat(char *str1, char *str2);
char *my_strdup(char *str);
int my_strlen(char *str);
char *open_file(const char *filepath);
bool starts_with(char *str, char *start);
char *to_lower(char *str);
char *to_upper(char *str);
