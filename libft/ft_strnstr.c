/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 07:50:14 by vcoelho           #+#    #+#             */
/*   Updated: 2026/11/21 09:24:15 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (little[j] == '\0')
	{
		return ((char *)big);
	}
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] && i + j < len && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}

// int main(int argc, char **argv)
// {
// 	(void) argc;
// 	const char *ls = argv[1];
// 	const char *ss = argv[2];
// 	size_t size = atoi(argv[3]);
// 	printf("%s\n", ft_strnstr(ls, ss, size));
// 	// printf("%s\n", ft_strnstr(ls, ss, sizeof(ls)));
// 	return(0);
// }
