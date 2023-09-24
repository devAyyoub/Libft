/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Aamjahed <aamjahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 00:48:59 by Aamjahed          #+#    #+#             */
/*   Updated: 2023/09/24 23:01:31 by Aamjahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((s1[i] == '\0') || (s2[i] == '\0') || (s1[i] != s2[i]))
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		++i;
	}
	return (0);
}
