/*
** EPITECH PROJECT, 2020
** sdf
** File description:
** calloc
*/

#include "./include/malloc.h"

void *calloc(size_t nmemb, size_t size)
{
    void *n;

    if (nmemb == 0 || size == 0)
        return NULL;
    n = malloc(nmemb * size);
    if (n == NULL)
        return NULL;
    return n;
}
