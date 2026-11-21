/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 08:45:59 by vcoelho           #+#    #+#             */
/*   Updated: 2026/11/21 08:58:08 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *))
{
	if(!f)
		return(NULL);
	t_list	*h;
	t_list	*node;
	
	void	*content;

	h = NULL;
	while (lst)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (!node)
		{
			del(content);
			ft_lstclear(&h, del);
			return (NULL);
		}
		ft_lstadd_back(&h, node);
		lst = lst->next;
	}
	return (h);
}
