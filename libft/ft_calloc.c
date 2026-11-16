/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 13:36:47 by vcoelho           #+#    #+#             */
/*   Updated: 2026/11/07 15:28:24 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	totalspace;
	size_t	i;

	if (size == 0 || nmemb == 0)
		return (malloc(0));
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	totalspace = nmemb * size;
	p = malloc(totalspace);
	if (!p)
		return (NULL);
	i = 0;
	while(i < totalspace)
	{
		((unsigned char *)p)[i] = 0;
		i++;
	}
	return (p);
}

// int main(int argc, char **argv)
// {
// 	(void) argc;
// 	printf("%p\n", ft_calloc((size_t)atoi(argv[1]), (size_t)atoi(argv[2])));
// 	printf("%p\n", calloc((size_t)atoi(argv[1]), (size_t)atoi(argv[2])));
// 	return(0);
// }
