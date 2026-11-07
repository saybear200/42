/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 11:28:31 by vcoelho           #+#    #+#             */
/*   Updated: 2026/11/07 13:01:37 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d = (unsigned char *)dest;
	const unsigned char *s = (const unsigned char *)src;
	size_t i;

	i = 0;
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else if (d > s)
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	return (dest);
}

// int main(int argc, char **argv)
// {
// 	(void) argc;
// 	printf("%s\n", (char *)ft_memmove(argv[1], argv[2], (size_t) atoi(argv[3])));
// 	printf("%s\n", (char *)memmove(argv[1], argv[2], (size_t)atoi(argv[3])));
// 	return(0);
// }
