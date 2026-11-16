/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 09:32:32 by vcoelho           #+#    #+#             */
/*   Updated: 2026/11/07 13:25:03 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// int main(int argc, char **argv)
// {
// 	(void) argc;
// 	char *strava = argv[1];
// 	int character = argv[2][0];
// 	size_t bnbr = (size_t)atoi(argv[3]);
// 	ft_memset(strava, character, bnbr);
// 	printf("%s\n", strava);
// 	return(0);
// }
