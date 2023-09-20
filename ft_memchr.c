/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Aamjahed <aamjahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 00:11:48 by Aamjahed          #+#    #+#             */
/*   Updated: 2023/09/21 00:12:20 by Aamjahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//Esta funcion busca un caracter en un string y devuelve un puntero a la primera ocurrencia de ese caracter.
void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *p;

    p = (unsigned char *)s;
    while (n--)
    {
        if (*p == (unsigned char)c)
            return (p);
        p++;
    }
    return (NULL);
}