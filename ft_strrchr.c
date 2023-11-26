/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pejimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 21:09:54 by pejimene          #+#    #+#             */
/*   Updated: 2023/11/26 21:10:00 by pejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ret;
	int		i;

	i = 0;
	ret = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			ret = (char *)(s + i);
		++i;
	}
	if ((char) c == '\0')
		return ((char *)(s + i));
	return (ret);
}
