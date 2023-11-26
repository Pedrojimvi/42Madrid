/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pejimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 21:09:09 by pejimene          #+#    #+#             */
/*   Updated: 2023/11/26 21:09:26 by pejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		j = i;
		k = 0;
		while (needle[k] && haystack[j] && haystack[j] == needle[k]
			&& j < len)
		{
			++j;
			++k;
			if (needle[k] == '\0')
				return ((char *) haystack + i);
		}
		++i;
	}
	return (0);
}
