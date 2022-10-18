/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmas <eelmas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:33:27 by eelmas            #+#    #+#             */
/*   Updated: 2022/10/17 18:17:06 by eelmas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	i;

	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	a = ft_strlen(dst);
	i = 0;
	while (src[i] != '\0' && (a + 1 < size))
	{
		dst[a] = src[i];
		a++;
		i++;
	}
	dst[a] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}

//adds src string to dst string
//dstsize argument is equel to the size of dst buffer
//returns the total len of the string created
