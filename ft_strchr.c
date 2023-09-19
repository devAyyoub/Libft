/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Aamjahed <aamjahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 00:39:26 by Aamjahed          #+#    #+#             */
/*   Updated: 2023/09/20 00:46:10 by Aamjahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>


//lo que hace esta funcion es buscar un caracter en un string y si lo encuentra devuelve un puntero a ese caracter y devuelve null si no lo encuentra
char *ft_strchr(char *str, int c) //se pone char *str porque es un string y no un caracter y lo devuelve como puntero porque es un string
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return (&str[i]);
        i++;
    }
    return (NULL);
}

int main()
{
    char s1[] = "hello";
    printf("%s\n", ft_strchr(s1, 'e'));
    return (0);
}