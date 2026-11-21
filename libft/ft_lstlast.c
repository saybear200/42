/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 08:28:10 by vcoelho           #+#    #+#             */
/*   Updated: 2026/11/21 08:57:55 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if(!lst)
		return(NULL);
	while (lst == NULL)
		return (lst);
	while (lst != NULL)
		lst = lst->next;
	return (lst);
}
