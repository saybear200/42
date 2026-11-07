/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 07:39:48 by vcoelho           #+#    #+#             */
/*   Updated: 2026/11/07 16:34:16 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlcpy(char *dest, char *src, int i)
{
	int	j;

	j = 0;
	if(i > 0)
	{
		while(j < i - 1 && src[j] != '\0')
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
	}
	j = 0;
	while (src[j] != '\0')
		j++;
	return(j);
}

// int main(int argc, char **argv)
// {
// 	(void) argc;
// 	printf("%d\n", ft_strlcpy(argv[1], argv[2], atoi(argv[3])));
// 	printf("%ld\n", strlcpy(argv[1], argv[2], atoi(argv[3])));
// 	return(0);
// }
