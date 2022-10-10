/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmas <eelmas@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:40:49 by eelmas            #+#    #+#             */
/*   Updated: 2022/10/05 13:48:34 by eelmas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)src)[i] = c;
		i++;
	}
	return (src);
}

/*int	main (int args, char **argv)
{
	int arr1[] = {3, 4};

	ft_memset(arr1, 0, 2 * sizeof(int));
	printf("arr1 = %d, %d", arr1[0], arr1[1]);
}*/
