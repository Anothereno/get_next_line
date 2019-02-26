/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_arr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdwarven <hdwarven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 17:39:05 by hdwarven          #+#    #+#             */
/*   Updated: 2019/01/06 19:34:13 by hdwarven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_free_arr(void ***arr, unsigned long z)
{
	z--;
	while (z > 0)
	{
		if (*arr[z])
		{
			free(*arr[z]);
			*arr[z] = NULL;
		}
		z--;
	}
	free(*arr[z]);
	*arr[z] = NULL;
	free(*arr);
	*arr = NULL;
	return (NULL);
}
