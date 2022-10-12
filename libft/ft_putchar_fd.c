/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmas <eelmas@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:03:05 by eelmas            #+#    #+#             */
/*   Updated: 2022/10/12 11:30:23 by eelmas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

/* outputs the c char to the file descriptor fd 
 * fd = filde descriptor
 * * 0 -> standart input (STDIN)
 * * 1 -> standart output (STDOUT)
 * * 2 -> standart error (STRERR)
 */
