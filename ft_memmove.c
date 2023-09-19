/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Aamjahed <aamjahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 00:13:14 by Aamjahed          #+#    #+#             */
/*   Updated: 2023/09/20 00:21:43 by Aamjahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h> 

//la función memmove copia n bytes de la memoria de src a la memoria de dst.
//La memoria de dst y src no deben superponerse.
void *ft_memmove(void *dst, const void *src, size_t len) //len es el tamaño de la memoria a copiar
{
    unsigned char *d;
    unsigned char *s;

    d = dst;
    s = (unsigned char *)src;
    if (d < s) //si el puntero de destino es menor que el de origen
        while (len--)
            *d++ = *s++;
    else //si el puntero de destino es mayor que el de origen
    {
        d += len; //se le suma a d el tamaño de len
        s += len; //se le suma a s el tamaño de len
        while (len--) //mientras len sea diferente de 0
            *--d = *--s; //se le resta a d y s y se le asigna el valor de s a d
    }
    return (dst);
}

int main()
{
    char s1[] = "hello";
    char s2[] = "worldworld";
    ft_memmove(s1, s2, 6);
    printf("%s\n", s1);
    return (0); 
}