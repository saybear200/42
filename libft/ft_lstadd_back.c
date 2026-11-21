/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 08:32:31 by vcoelho           #+#    #+#             */
/*   Updated: 2026/11/21 08:55:10 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ne;

	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	ne = *lst;
	while (ne->next != NULL)
		ne = ne->next;
	ne->next = new;
}
