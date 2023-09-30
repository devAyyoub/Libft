/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Aamjahed <aamjahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 16:30:35 by Aamjahed          #+#    #+#             */
/*   Updated: 2023/10/01 01:52:23 by Aamjahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_min(size_t n1, size_t n2)
{
	if (n1 <= n2)
		return (n1);
	else
		return (n2);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	real_len;
	unsigned int	i;

	real_len = ft_strlen(s);
	if (start > real_len)
		return (ft_strdup(""));
	substr = malloc(sizeof(char) * (ft_min(len, real_len - start) + 1));
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		substr[i] = s[start + i];
		++i;
	}
	substr[i] = '\0';
	return (substr);
}
