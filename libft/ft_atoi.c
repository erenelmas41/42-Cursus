/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmas <eelmas@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:56:15 by eelmas            #+#    #+#             */
/*   Updated: 2022/10/05 13:37:39 by eelmas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	c;
	int	sign;
	int	count;

	c = 0;
	sign = 1;
	count = 0;
	while (str[c] == ' ' || str[c] == '\n'
		|| str[c] == '\t' || str[c] == '\f'
		|| str[c] == '\v' || str[c] == '\r')
		c++;
	if (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			sign = -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		count = (count * 10) + (str[c] - '0');
		c++;
	}
	return (count * sign);
}
