/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdwarven <hdwarven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 19:45:10 by hdwarven          #+#    #+#             */
/*   Updated: 2019/01/06 19:34:13 by hdwarven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_putchar_fd(int c, int fd)
{
	int first;
	int second;

	if (fd != -1)
	{
		if (c < 128)
			write(fd, &c, 1);
		else
		{
			first = 192 + c / 64;
			second = 128 + c % 64;
			write(fd, &first, 1);
			write(fd, &second, 1);
		}
	}
}
