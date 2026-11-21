/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 08:46:19 by vcoelho           #+#    #+#             */
/*   Updated: 2026/11/21 08:48:11 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*element;
	t_list	*next;

	if(!lst || !del)
		return ;
	element = *lst;
	while (element != NULL)
	{
		next = element->next;
		del(element->content);
		free(element);
		element = next;
	}
	*lst = NULL;
}
