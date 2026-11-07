/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 07:40:12 by vcoelho           #+#    #+#             */
/*   Updated: 2026/11/07 16:34:08 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(char *s1, char *s2, int j)
{
	int	i;
	int	a;

	i = 0;
	while(i < j )
	{
		if(s1[i] != s2[i])
		{
			a = s1[i] - s2[i];
			return(a);
		}
		if(s1[i] == '\0')
			return(0);
		i++;
	}
	return(0);
}

// int main(int argc, char **argv)
// {
// 	(void) argc;
// 	printf("%d\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
// 	printf("%d\n", strncmp(argv[1], argv[2], atoi(argv[3])));
// 	return(0);
// }
