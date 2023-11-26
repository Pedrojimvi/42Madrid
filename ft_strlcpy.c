/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pejimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 21:07:01 by pejimene          #+#    #+#             */
/*   Updated: 2023/11/26 21:07:07 by pejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		i;

	i = 0;
	while (dstsize != 0 && src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		++i;
	}
	if (i < dstsize)
		dst[i] = '\0';
	return (ft_strlen(src));
}
