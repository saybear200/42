/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 15:30:50 by vcoelho           #+#    #+#             */
/*   Updated: 2026/11/09 09:57:52 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t s1size;
	size_t s2size;
	char *p;
	int i;

	if(!s1 && !s2)
		return(NULL);
	if(s1)
		s1size = ft_strlen((char *)s1);
	if(s2)
		s2size = ft_strlen((char *)s2);
	p = malloc(s1size + s2size + 1);
	if(!p)
		return(NULL);
	while(s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	i = 0;
	while(s2[i])
	{
		p[s1size + i] = s2[i];
		i++;
	}
	p[s1size + s2size] = '\0';
	return(p);
}

// int main(int argc, char **argv)
// {
// 	(void) argc;
// 	char const *string1 = argv[1];
// 	char const *string2 = argv[2];
// 	printf("%s\n", ft_strjoin(string1, string2));
// 	return(0);
// }
