/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pejimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 21:10:20 by pejimene          #+#    #+#             */
/*   Updated: 2023/11/26 21:10:46 by pejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		++i;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] && is_set(s1[i], set))
		++i;
	while (j >= 0 && s1[j] && is_set(s1[j], set))
		--j;
	if (i > j)
		return (ft_strdup(""));
	ret = malloc((j - i + 2) * sizeof(char));
	if (!ret)
		return (0);
	k = 0;
	while (i <= j)
		ret[k++] = s1[i++];
	ret[k] = '\0';
	return (ret);
}
