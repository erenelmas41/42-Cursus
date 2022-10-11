/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmas <eelmas@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:21:51 by eelmas            #+#    #+#             */
/*   Updated: 2022/10/11 11:20:36 by eelmas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	c;

	if (*to_find == '\0' || str == to_find)
		return ((char *)str);
	c = ft_strlen(to_find);
	while (*str && c <= len--)
	{
		if (!(ft_strncmp((char *)str, (char *)to_find, c)))
			return ((char *)str);
		str++;
	}
	return (NULL);
}

//locates the first occurrence of the substr to_find
//in the string str and returns a pointer to this pos
