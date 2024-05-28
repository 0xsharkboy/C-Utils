/*
** EPITECH PROJECT, 2023
** C-Utils
** File description:
** open_file.c
*/

#include "cutils.h"

char *open_file(const char *filepath)
{
    int fd = open(filepath, O_RDONLY);
    char *buffer;
    struct stat infos;
    int size;

    stat(filepath, &infos);
    if (fd == -1 || !((infos.st_mode & S_IFMT) == S_IFREG))
        return NULL;
    size = infos.st_size;
    buffer = malloc(size + 1);
    read(fd, buffer, size);
    buffer[size] = '\0';
    return buffer;
}
