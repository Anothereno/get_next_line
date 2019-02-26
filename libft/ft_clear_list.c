/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdwarven <hdwarven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 17:32:51 by hdwarven          #+#    #+#             */
/*   Updated: 2019/01/06 19:34:13 by hdwarven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_clear_list(t_list *begin)
{
	int		i;
	t_list	*tail;

	i = ft_size_of_lst(begin) + 1;
	while (i-- > 0)
	{
		tail = begin;
		while (tail->next)
		{
			tail = tail->next;
		}
		free(tail->content);
		tail->content = NULL;
		free(tail);
		tail = NULL;
	}
	free(begin);
	begin = NULL;
	return (begin);
}
