/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmas <eelmas@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:03:05 by eelmas            #+#    #+#             */
/*   Updated: 2022/10/07 11:24:13 by eelmas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

/* c'yi verilen parametrede fd'ye yazdırır.
 * fd = filde descriptor (dosya tanımlayıcı)
 * * 0 -> standart girdi (STDIN)
 * * 1 -> standart çıktı (STDOUT)
 * * 2 -> standart hata (STRERR)
 */
