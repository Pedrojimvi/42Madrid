/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pejimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:05:30 by pejimene          #+#    #+#             */
/*   Updated: 2023/11/26 20:05:34 by pejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	space(char c)
{
	return (c == ' ' || c == '\f' || c == '\r' || c == '\t'
		|| c == '\v' || c == '\n');
}

int	ft_atoi(const char *str)
{
	int		num;
	int		pos;

	pos = 1;
	num = 0;
	while (*str != '\0' && space(*str))
		++str;
	if (*str != '\0' && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			pos *= -1;
		++str;
	}
	while (*str != '\0' && *str >= '0' && *str <= '9')
	{
		num *= 10;
		num += *str - '0';
		++str;
	}
	return (num * pos);
}
