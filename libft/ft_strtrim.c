/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 17:34:10 by vcoelho           #+#    #+#             */
/*   Updated: 2026/11/09 18:25:34 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		size_s1;
	int		start;
	int		str_size ;
	int		i;
	char	*str;

	size_s1 = ft_strlen((char *)s1);
	start = 0;
	i = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (size_s1 > start && ft_strrchr(set, s1[size_s1 - 1]))
		size_s1--;
	str_size = size_s1 - start;
	str = malloc(sizeof(char) * (str_size + 1));
	if (!str)
		return (NULL);
	while (i < str_size)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int main(int argc, char **argv)
// {
// 	(void) argc;
// 	printf("%s\n", ft_strtrim(argv[1], argv[2]));
// 	return(0);
// }
