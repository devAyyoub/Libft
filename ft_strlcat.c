/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Aamjahed <aamjahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 00:26:25 by Aamjahed          #+#    #+#             */
/*   Updated: 2023/09/30 16:54:56 by Aamjahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	src_size;
	size_t	i;

	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	i = 0;
	while (src[i] != '\0' && dst_size + i + 1 < size)
	{
		dst[dst_size + i] = src[i];
		++i;
	}
	if (size >= dst_size)
	{
		dst[dst_size + i] = '\0';
		return (dst_size + src_size);
	}
	return (size + src_size);
}
