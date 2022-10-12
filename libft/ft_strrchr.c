/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmas <eelmas@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:56:53 by eelmas            #+#    #+#             */
/*   Updated: 2022/10/12 11:50:50 by eelmas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*holds;

	holds = s;
	i = ft_strlen(s);
	s = (s + i);
	while (*s != *holds && (char )c != *s)
		s--;
	if ((char )c == *s)
		return ((char *)s);
	return (0);
}

//returns a pointer to the last occurrence of the character
//c in the string s
