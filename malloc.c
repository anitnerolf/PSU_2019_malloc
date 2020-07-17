/*
** EPITECH PROJECT, 2020
** sdf
** File description:
** dfgh
*/

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <assert.h>
#include "./include/malloc.h"

void *malloc(size_t size)
{
    void *first = sbrk(0);
    void *sb = sbrk(size);

    if (sb == (void *)-1)
        return (NULL);
    else {
        return first;
    }
}
