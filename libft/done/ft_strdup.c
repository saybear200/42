/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 19:11:48 by vcoelho           #+#    #+#             */
/*   Updated: 2026/10/22 19:55:25 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *ft_strdup(char *src)
{
	char *str;
	int size;
	int i;

	size = 0;
	i = 0;
	while(src[size])
		size++;

	str = malloc(size + 1 * sizeof(char));

	while(src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return(str);

}

// int main(int argc, char **argv)
// {
// 	(void) argc;
// 	printf("%s\n", ft_strdup(argv[1]));
// 	return(0);
// }

