/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmas <eelmas@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:27:48 by eelmas            #+#    #+#             */
/*   Updated: 2022/10/12 11:32:22 by eelmas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	a;

	a = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		a = (unsigned int)(n * -1);
	}
	if (a > 9)
		ft_putnbr_fd(a / 10, fd);
	ft_putchar_fd((char)(a % 10 + '0'), fd);
}

//outputs the integer n to the given fd
