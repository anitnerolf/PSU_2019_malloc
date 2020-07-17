/*
** EPITECH PROJECT, 2020
** asdf
** File description:
** sdf
*/

#ifndef MALLOC_H_
#define MALLOC_H_

#include <stdio.h>
#include <string.h>

typedef struct s_block {
    int first;
} t_block;

void	*malloc(size_t size);
void	free(void *ptr);
void	*realloc(void *ptr, size_t size);
void	*calloc(size_t nmemb, size_t size);
void	*reallocarray(void *ptr, size_t nmemb, size_t size);

#endif /* MALLOC_H_ */
