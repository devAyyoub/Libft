/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Aamjahed <aamjahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 00:13:06 by Aamjahed          #+#    #+#             */
/*   Updated: 2023/09/21 00:14:09 by Aamjahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//Esta funcion compara los primeros n bytes de las areas de memoria apuntadas por s1 y s2.
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *p1;
    unsigned char *p2;

    p1 = (unsigned char *)s1;
    p2 = (unsigned char *)s2;
    while (n--)
    {
        if (*p1 != *p2) 
            return (*p1 - *p2);
        p1++;
        p2++;
    }
    return (0);
}