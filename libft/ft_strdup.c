/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmas <eelmas@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:40:18 by eelmas            #+#    #+#             */
/*   Updated: 2022/10/07 10:04:45 by eelmas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;

	str = ((char *)malloc(sizeof(char) * (ft_strlen(s) + 1)));
	if (!str)
		return (0);
	ft_memcpy(str, s, ft_strlen(s) + 1);
	return (str);
}

/* s parameterisi ile gösterilen dizinin aynısını geri döndürür.
 * atama başarısız olursa 0 döndürür, tersi durumda yeni
 * adresi döndürür.
 */
