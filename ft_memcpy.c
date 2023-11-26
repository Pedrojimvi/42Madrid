/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pejimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:52:35 by pejimene          #+#    #+#             */
/*   Updated: 2023/11/26 20:52:41 by pejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	void	*or;

	if (!dst && !src)
		return (0);
	or = dst;
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *) src)[i];
		++i;
	}
	return (or);
}
