/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmas <eelmas@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:13:30 by eelmas            #+#    #+#             */
/*   Updated: 2022/10/17 18:13:17 by eelmas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && (char )c != *s)
		s++;
	if ((char )c == *s)
		return ((char *)s);
	return (0);
}

//returns a pointer to the first occurrence of the c 
//in the string s
//return NULL if the character doesnt appear
