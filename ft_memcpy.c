/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Aamjahed <aamjahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 00:49:31 by Aamjahed          #+#    #+#             */
/*   Updated: 2023/09/18 00:50:02 by Aamjahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *p;
    unsigned char *q;

    p = dest;
    q = src;
    while (n--)
        *p++ = *q++;
    return (dest);
}