/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 11:45:11 by vcoelho           #+#    #+#             */
/*   Updated: 2026/11/16 11:46:32 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*int main(int argc, char **argv)
{
	(void)argc;	
	t_list *head;
	t_list *new;
	t_list *tmp;
	head = ft_lstnew(argv[1]);
	new = ft_lstnew(argv[2]);
	ft_lstadd_front(&head, new);
	tmp = head;
	while(tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
	return(0);	
}*/

