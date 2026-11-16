/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 11:05:14 by vcoelho           #+#    #+#             */
/*   Updated: 2026/11/07 11:28:29 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	int i;
	unsigned char *s1 = (unsigned char *) dest;
	unsigned char *s2 = (unsigned char *) src;


	i = 0;
	while((size_t)i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return(dest);
}

// int main(int argc, char **argv)
// {
// 	(void)argc;
// 	char *source = argv[2];
// 	char *destiny = argv[1];
// 	printf("%s\n", (char *)ft_memcpy(destiny, source, (size_t)atoi(argv[3])));
// 	printf("%s\n", (char *)memcpy(destiny, source, (size_t)atoi(argv[3])));
// 	return(0);
// }
