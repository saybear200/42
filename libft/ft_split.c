/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 15:58:22 by vcoelho           #+#    #+#             */
/*   Updated: 2026/11/21 16:55:24 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_cwords(char const *s, char c)
{
	int	words;
	int	i;

	if (!s)
		return (0);
	words = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			words++;
		while (s[i] != c && s[i])
			i++;
	}
	return (words);
}

static void	*ft_free_all(char **p, int j)
{
	while (j > 0)
		free (p[--j]);
	free (p);
	return (NULL);
}

// arr[0] = i;
// arr[1] = j;
// arr[2] = start;

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		arr[3];

	arr[0] = 0;
	arr[1] = 0;
	p = malloc(sizeof(char *) * (ft_cwords(s, c) + 1));
	if (!p || !s)
		return (NULL);
	while (s[arr[0]])
	{
		while (s[arr[0]] == c)
			arr[0]++;
		arr[2] = arr[0];
		while (s[arr[0]] && s[arr[0]] != c)
			arr[0]++;
		if (arr[0] > arr[2])
		{
			p[arr[1]] = ft_substr(s, arr[2], arr[0] - arr[2]);
			if (!p[arr[1]])
				return (ft_free_all(p, arr[1]));
			arr[1]++;
		}
	}
	p[arr[1]] = NULL;
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
