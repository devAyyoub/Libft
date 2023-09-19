/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Aamjahed <aamjahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 00:26:25 by Aamjahed          #+#    #+#             */
/*   Updated: 2023/09/20 00:37:47 by Aamjahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//MIRAR MEJOR
//esta funcion concatena la cadena src a la cadena dst
void ft_strlcat(char *dst, char *src, size_t dstsize) //dstsize es el tamaño de la cadena de destino
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    while (dst[i]) //mientras dst[i] no sea nulo
        i++;
    while (src[j] && i < dstsize - 1) //mientras src[j] no sea nulo y i sea menor que el tamaño de dst - 1
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
}

int main ()
{
    char s1[50] = "hello";
    char s2[] = "world";
    ft_strlcat(s1, s2, 6);
    printf("%s\n", s1);
    return (0);
}