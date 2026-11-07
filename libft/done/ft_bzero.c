/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 13:02:20 by vcoelho           #+#    #+#             */
/*   Updated: 2026/11/07 13:35:50 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// int	main(int argc, char **argv)
// {
// 	(void) argc;
// 	char	*str = argv[1];
// 	size_t nbr = (size_t)atoi(argv[2]);
// 	size_t l = strlen(str);
// 	int		i;

// 	ft_bzero(str, nbr);
// 	i = 0;
// 	while ((size_t)i < l)
// 	{
// 		printf("%d ", (unsigned char)str[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }
