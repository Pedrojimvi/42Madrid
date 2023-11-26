/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pejimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 21:05:57 by pejimene          #+#    #+#             */
/*   Updated: 2023/11/26 21:06:04 by pejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	src_size;
	size_t	dest_size;

	j = 0;
	src_size = ft_strlen(src);
	while (dst[j] != '\0')
		++j;
	if (dstsize == 0 || dstsize <= j)
		return (src_size + dstsize);
	dest_size = j;
	i = 0;
	while (src[i] != '\0' && i < dstsize - dest_size - 1)
	{
		dst[j] = src[i];
		++j;
		++i;
	}
	dst[j] = '\0';
	return (src_size + dest_size);
}
