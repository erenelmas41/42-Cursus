/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmas <eelmas@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:25:50 by eelmas            #+#    #+#             */
/*   Updated: 2022/10/07 09:33:08 by eelmas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dst;

	dst = (void *)malloc(count * size);
	if (!dst)
		return (0);
	ft_memset(dst, 0, count * size);
	return (dst);
}
/* malloc() değerler için bellek alanı ayırmaya yarar.
 * calloc() boyutları byte olarak ifade edilen ve size değeri kadar olan
 * bellekten num değeri kadar bellek bloğu ayırır ve ayrılan belleğin
 * tamamını sıfır ile doldurur.
 */
