/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdwarven <hdwarven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 20:05:59 by hdwarven          #+#    #+#             */
/*   Updated: 2019/01/06 19:34:13 by hdwarven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	len;
	char	*tmp;
	char	*begin;

	begin = NULL;
	tmp = NULL;
	len = 0;
	if (s != NULL && f != NULL)
	{
		len = ft_strlen(s);
		tmp = (char*)malloc(sizeof(char) * len + 1);
		begin = tmp;
		if (tmp == NULL)
			return (NULL);
		while (*s)
		{
			*tmp = f(*s);
			tmp++;
			s++;
		}
		*tmp = '\0';
	}
	return (begin);
}
