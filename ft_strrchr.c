/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Aamjahed <aamjahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:06:30 by Aamjahed          #+#    #+#             */
/*   Updated: 2023/10/01 01:51:27 by Aamjahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*p;
	unsigned int	i;

	p = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			p = (char *)s + i;
		++i;
	}
	if ((char)c == 0)
		p = (char *)s + i;
	return (p);
}
