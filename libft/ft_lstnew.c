/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 10:38:18 by vcoelho           #+#    #+#             */
/*   Updated: 2026/11/16 11:39:26 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *node;

	node = (t_list *)malloc(sizeof(t_list));
	if(!node)
		return(NULL);
	node->content = content;
	node->next = NULL;
	return(node);
}

/*int main(int argc, char **argv)
{
 	(void)argc;
 	char *str = argv[1];
 	t_list *node;
	node = ft_lstnew(str);
	printf("%s\n", (char *)node->content);
	return(0);
}
*/

