/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 11:07:43 by vcoelho           #+#    #+#             */
/*   Updated: 2026/11/21 09:18:42 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != (char)c)
		i++;
	if (s[i] == (char)c)
		return (&((char *)s)[i]);
	return(NULL);
}

// int main(int argc, char **argv)
// {
// 	(void) argc;
// 	printf("%s\n", ft_strchr(argv[1], argv[2][0]));
// 	printf("%s\n", strchr(argv[1], argv[2][0]));
// 	return(0);
// }
