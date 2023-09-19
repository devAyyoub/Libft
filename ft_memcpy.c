/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Aamjahed <aamjahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 00:49:31 by Aamjahed          #+#    #+#             */
/*   Updated: 2023/09/20 00:10:45 by Aamjahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
//lo que hace esta funcion es copiar n bytes de src a dest dependiendo del tamaño de n y retorna un puntero a dest
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *p;
    const unsigned char *q;

    p = dest;
    q = src;
    while (n--)
        *p++ = *q++;
    return (dest);
}

int main()
{
    char s1[] = "hellx";
    char s2[] = "world";
    ft_memcpy(s1, s2, 5);
    printf("%s\n", s1);
    return (0); 
}