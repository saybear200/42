/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 11:34:14 by vcoelho           #+#    #+#             */
/*   Updated: 2026/10/31 17:47:04 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int i;

	i = ft_strlen((char *)str);
	while(str[i] != (char)c)
	{
		i--;
	}
	if(str[i] == (char)c)
		return(&((char *)str)[i]);
	return(NULL);
}

// int main(int argc, char **argv)
// {
//  	(void) argc;
//  	printf("%s\n", ft_strrchr("Banana", 'n'));
//  	printf("%s\n", strrchr("Banana", 'n'));
//  	return(0);
// } 
