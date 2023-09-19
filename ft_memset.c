/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Aamjahed <aamjahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:39:52 by Aamjahed          #+#    #+#             */
/*   Updated: 2023/09/20 00:11:55 by Aamjahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//la funcion memset es una funcion que llena un bloque de memoria con un valor especifico

void *memset(void *s, int c, size_t n)
{
    unsigned char *p;

    p = s;
    while (n--) //mientras n sea diferente de 0
        *p++ = (unsigned char)c; //casteo de c a unsigned char
    return (s);
}

int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);

    // Fill 8 characters starting from str[13] with '.'
    memset(str + 13, '.', 8 * sizeof(char)); //lo que hace es que empieza a llenar desde la posicion 13 del string con el caracter '.' y lo hace 8 veces

    printf("After memset():  %s", str);
    return 0;
}