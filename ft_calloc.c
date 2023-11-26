/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pejimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:10:21 by pejimene          #+#    #+#             */
/*   Updated: 2023/11/26 20:10:33 by pejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ret;

	if (count == 0 || size == 0)
		return ((void *) malloc(0));
	if (count >= SIZE_MAX || size >= SIZE_MAX)
		return (NULL);
	ret = malloc(count * size);
	if (ret == 0)
		return (0);
	ft_memset(ret, 0, count * size);
	return (ret);
}
