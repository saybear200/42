/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 11:28:31 by vcoelho           #+#    #+#             */
/*   Updated: 2026/11/21 09:14:35 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
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
// 	char *dest;
// 	char *src;
// 	size_t n;

// 	dest = argv[1];
// 	src = argv[2];
// 	n = atoi(argv[3]);
// 	printf("%s\n", (char *)ft_memmove(dest, src, (size_t)n));
// 	printf("%s\n", (char *)memmove(dest, src, (size_t)n));
// 	return(0);
// }
