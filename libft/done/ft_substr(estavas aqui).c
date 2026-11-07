/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 15:30:39 by vcoelho           #+#    #+#             */
/*   Updated: 2026/11/07 16:37:45 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *p;
	size_t totalsize = 0;
	unsigned int *star = (unsigned int *) start;
	if(!s)
		return(NULL);
	i = 0;
	while(s[i] != star[0])
		i++;
	if(s[i] == star[0])
	{
		totalsize = ft_strlen(s) - i;
	}
	p = malloc(totalsize);
	if(!p)
		return(NULL);
	return(p);
}

int main(int argc, char **argv)
{
	(void) argc;
	char const *string = (char const *) argv[1];
	unsigned int sub = (unsigned int) argv[2];
	size_t tamanho = (size_t)atoi(argv[3]);
	printf("%s\n", ft_substr( string, sub,tamanho));
	return(0);
}
