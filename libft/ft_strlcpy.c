/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 07:39:48 by vcoelho           #+#    #+#             */
/*   Updated: 2026/11/21 13:13:39 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

// int main(int argc, char **argv)
// {
// 	(void) argc;
// 	printf("%zu\n", ft_strlcpy(argv[1], argv[2], atoi(argv[3])));
// 	// printf("%d\n", strlcpy(argv[1], argv[2], atoi(argv[3])));
// 	return(0);
// }
