/*
** EPITECH PROJECT, 2020
** sdfg
** File description:
** realloc
*/

#include "./include/malloc.h"

void *realloc(void *ptr, size_t size)
{
    void *str = &ptr;

    if (size == 0 && ptr != NULL)
        free(ptr);
    else if (ptr == NULL)
        str = malloc(size);
    else {
        str = malloc(size + sizeof(ptr));
        memcpy(str, ptr, strlen(ptr));
    }
    return str;
}
