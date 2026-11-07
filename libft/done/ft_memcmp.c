/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 10:39:57 by vcoelho           #+#    #+#             */
/*   Updated: 2026/11/07 12:53:19 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int i;
	unsigned char	*s12;
	unsigned char	*s22;

	s12 = (unsigned char *) s1;
	s22 = (unsigned char *) s2;

	i = 0;
	while((unsigned long)i < n)
	{
		if(s12[i] != s22[i])
			return(s12[i] - s22[i]);
		i++;
	}
	return(0);
}

// int main(int argc, char **argv)
// {
// 	(void) argc;
// 	unsigned char *string1;
// 	unsigned char *string2;
// 	size_t nbr;

// 	string1 = (unsigned char *)argv[1];
// 	string2 = (unsigned char *)argv[2];
// 	nbr = (size_t)atoi(argv[3]);

// 	printf("%d\n", ft_memcmp(string1, string2, nbr));
// 	printf("%d\n", memcmp(string1, string2, nbr));
// 	return(0);
// }
