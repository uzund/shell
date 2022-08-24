/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 22:40:15 by duzun             #+#    #+#             */
/*   Updated: 2021/10/30 14:13:15 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		++i;
	}
	return (1);
}
