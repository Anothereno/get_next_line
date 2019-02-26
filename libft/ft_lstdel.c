/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdwarven <hdwarven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 16:21:10 by hdwarven          #+#    #+#             */
/*   Updated: 2019/01/06 19:34:13 by hdwarven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;

	tmp = NULL;
	if (alst && del)
	{
		tmp = *alst;
		while ((*alst)->next && (*alst)->next->next)
		{
			tmp = (*alst)->next;
			(*alst)->next = (*alst)->next->next;
			ft_lstdelone(&tmp, del);
		}
		while ((*alst)->next != NULL)
		{
			tmp = (*alst)->next;
			(*alst)->next = NULL;
			ft_lstdelone(&tmp, del);
		}
		ft_lstdelone(alst, del);
	}
}
