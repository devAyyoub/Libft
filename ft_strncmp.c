/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Aamjahed <aamjahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 00:48:59 by Aamjahed          #+#    #+#             */
/*   Updated: 2023/09/20 01:03:26 by Aamjahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//MIRAR MEJOR
//lo que hace es comparar dos cadenas de caracteres y devuelve un entero menor, igual o mayor que cero si s1 es menor, igual o mayor que s2
int ft_strncmp(char *s1, char *s2, size_t n) //se pide size_t n porque es el tamaño de la memoria a comparar
{
    size_t i;

    i = 0;
    while (s1[i] && s2[i] && i < n) //mientras s1[i] y s2[i] no sean nulos y i sea menor que n
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    if (i == n)
        return (0);
    return (s1[i] - s2[i]);
}

int main()
{
    char s1[] = "hello";
    char s2[] = "hello";
    printf("%d\n", ft_strncmp(s1, s2, 5));
    return (0);
}