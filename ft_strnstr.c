/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Aamjahed <aamjahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 00:14:41 by Aamjahed          #+#    #+#             */
/*   Updated: 2023/09/21 00:15:09 by Aamjahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//Esta funcion busca la primera aparicion de la cadena needle en la cadena haystack, donde no mas de len caracteres son buscados. Los caracteres que aparecen despues de un caracter '\0' no son buscados.
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    if (!*needle)
        return ((char *)haystack);
    while (haystack[i] && i < len)
    {
        j = 0;
        while (haystack[i + j] == needle[j] && i + j < len)
        {
            if (!needle[j + 1])
                return ((char *)haystack + i);
            j++;
        }
        i++;
    }
    return (NULL);
}