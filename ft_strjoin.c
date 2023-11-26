/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pejimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 21:04:52 by pejimene          #+#    #+#             */
/*   Updated: 2023/11/26 21:04:58 by pejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	int		sl;
	int		i;
	char	*ret;

	sl = ft_strlen(s1);
	len = sl + ft_strlen(s2);
	ret = malloc((len + 1) * sizeof(char));
	if (!ret)
		return (0);
	i = 0;
	sl = 0;
	while (s1[i])
		ret[sl++] = s1[i++];
	i = 0;
	while (s2[i])
		ret[sl++] = s2[i++];
	ret[sl] = '\0';
	return (ret);
}
