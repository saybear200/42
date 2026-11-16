/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 07:39:59 by vcoelho           #+#    #+#             */
/*   Updated: 2026/11/16 09:33:51 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while(s[i])
		i++;
	return(i);
}

// int main(int argc, char **argv)
// {
// 	(void) argc;
// 	printf("%zu\n", ft_strlen(argv[1]));
// 	printf("%ld\n", strlen(argv[1]));
// 	return(0);
// }
