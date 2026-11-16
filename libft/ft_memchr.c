/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 09:47:36 by vcoelho           #+#    #+#             */
/*   Updated: 2026/11/07 10:47:30 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	int i;
	unsigned char *p;

	p = (unsigned char *)s;
	i = 0;
	while(i < (int)n)
	{
		if(*p == (unsigned char)c)
			return((void *)p);
		p++;
		i++;
	}
	return(NULL);
}

// int main(int argc, char **argv)
// {
// 	(void) argc;
// 	char *str;
// 	int c;
// 	size_t n;

// 	str = argv[1];
// 	c = argv[2][0];
// 	// n = (size_t) atoi(argv[3]);
// 	n = strlen(argv[1]);
// 	printf("%s\n", (char *)ft_memchr(str, c, n));
// 	printf("%s\n", (char *)memchr(str, c, n));
// 	return (0);
// }
