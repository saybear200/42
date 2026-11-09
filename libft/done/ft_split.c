/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 15:58:22 by vcoelho           #+#    #+#             */
/*   Updated: 2026/11/09 19:29:28 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_cwords(char const *s, char c)
{
	int words;
	int i;

	words = 0;
	i = 0;
	while(s[i])
	{
		while(s[i] == c)
			i++;
		if(s[i])
			words++;
		while(s[i] != c && s[i])
			i++;
	}
	return(words);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**p;
	int		words;

	if(!s)
		return(NULL);
	i = 0;
	j = 0;
	words = (ft_cwords(s,c));
	p = malloc(words + 1);
	if(!p)
		return(NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			words = 0;
			while (s[i + words] != c && s[i + words])
				words++;
			p[j] = malloc(sizeof(char) * (words + 1));
			if (!p[j])
				return (NULL);
			words = 0;
			while (s[i] != c && s[i])
				p[j][words++] = s[i++];
			p[j][words] = '\0';
			j++;
		}
	}
	p[j] = NULL;
	return (p);
}

// int main(int argc, char **argv)
// {
// 	(void) argc;
// 	char const *string = (char const *)argv[1];
// 	char character = argv[2][0];
// 	int i = 0;
// 	while(ft_split(string, character)[i])
// 	{
// 		printf("%s\n", ft_split(string, character)[i]);
// 		i++;
// 	}
// 	// printf("%d\n", ft_cwords(string, character));
// 	return(0);
// }
