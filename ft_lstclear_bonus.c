/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pejimene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:28:46 by pejimene          #+#    #+#             */
/*   Updated: 2023/11/26 20:28:49 by pejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*rm;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		rm = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(rm, (*del));
	}
	*lst = 0;
}
