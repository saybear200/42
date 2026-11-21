/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 11:34:14 by vcoelho           #+#    #+#             */
/*   Updated: 2026/11/21 15:00:30 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen((char *)s);
	while (i >= 0 && s[i] != (char)c)
	{
		i--;
	}
	if (i >= 0)
		return (&((char *)s)[i]);
	return (NULL);
}

// int main(int argc, char **argv)
// {
// 	(void) argc;
// 	printf("%s\n", ft_strrchr("Banana", 'n'));
// 	printf("%s\n", strrchr("Banana", 'n'));
// 	return(0);
// }
