/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Aamjahed <aamjahed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 01:20:12 by Aamjahed          #+#    #+#             */
/*   Updated: 2023/10/01 01:20:23 by Aamjahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	ln;

	ln = n;
	if (ln == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (ln < 0)
	{
		write(fd, "-", 1);
		ln = -ln;
	}
	if (ln > 9)
		ft_putnbr_fd((int)(ln / 10), fd);
	ft_putchar_fd(ln % 10 + '0', fd);
}
