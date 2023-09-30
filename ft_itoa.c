/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Aamjahed <aamjahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 01:14:53 by Aamjahed          #+#    #+#             */
/*   Updated: 2023/10/01 01:15:40 by Aamjahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	num_length(int n)
{
	int		len;
	long	copy;

	if (n == 0)
		return (1);
	len = 0;
	copy = n;
	if (copy < 0)
	{
		++len;
		copy = -copy;
	}
	while (copy > 0)
	{
		copy /= 10;
		++len;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*a;
	long	copy;
	int		len;

	len = num_length(n);
	a = malloc(sizeof(char) * (len + 1));
	if (a == NULL)
		return (NULL);
	copy = n;
	if (copy == 0)
		a[0] = '0';
	if (copy < 0)
	{
		a[0] = '-';
		copy = -copy;
	}
	a[len--] = '\0';
	while (copy > 0)
	{
		a[len--] = copy % 10 + '0';
		copy /= 10;
	}
	return (a);
}
