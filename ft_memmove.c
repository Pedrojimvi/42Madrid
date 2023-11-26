/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pejimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:53:14 by pejimene          #+#    #+#             */
/*   Updated: 2023/11/26 20:53:31 by pejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*or;
	char	*sr;

	or = (char *)dst;
	sr = (char *)src;
	if (or < sr)
		ft_memcpy(or, sr, len);
	else if (or > sr)
	{
		i = len;
		while (i > 0)
		{
			--i;
			or[i] = sr[i];
		}
	}
	return (dst);
}
