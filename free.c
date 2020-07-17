/*
** EPITECH PROJECT, 2020
** asdf
** File description:
** free
*/

#include "./include/malloc.h"

void	free(void *ptr)
{
    if (ptr == NULL)
        return;
    t_block *str = (t_block *)ptr;
    str->first = 0;
}
