/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 11:07:43 by vcoelho           #+#    #+#             */
/*   Updated: 2026/10/31 17:28:59 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, char chr)
{
	int i;

	i = 0;
	while(str[i])
	{
		while (str[i] && str[i] != (char)chr)
			i++;
		if (str[i] == (char)chr)
			return(&((char *)str)[i]);
	}
	return(NULL);
}

// int main(int argc, char **argv)
// {
// 	(void) argc;
// 	printf("%s\n", ft_strchr(argv[1], argv[2][0]));
// 	printf("%s\n", strchr(argv[1], argv[2][0]));
// 	return(0);
// }
