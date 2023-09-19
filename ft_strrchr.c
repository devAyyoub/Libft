/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Aamjahed <aamjahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 00:46:38 by Aamjahed          #+#    #+#             */
/*   Updated: 2023/09/20 00:48:37 by Aamjahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//MIRAR MEJOR
//lo que hace esta funcion es buscar el caracter c en la cadena s y devuelve un puntero a la ultima ocurrencia del caracter c en la cadena s
char *ft_strrchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    while (i >= 0) //se pone i >= 0 porque i es un entero y no un caracter
    {
        if (s[i] == c)
            return ((char *)s + i);
        i--;
    }
    return (NULL);
}