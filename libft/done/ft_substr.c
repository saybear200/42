/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr(estavas aqui).c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 15:30:39 by vcoelho           #+#    #+#             */
/*   Updated: 2026/11/09 10:00:04 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *p;
	size_t slen;

	if(!s)
		return(NULL);
	slen = ft_strlen((char *)s);
	if( start >= slen)
		return(ft_strdup(""));
	if(len > slen - start)
		len = slen - start;
	p = malloc(len + 1);
	if(!p)
		return(NULL);
	i = 0;
	while(i < len)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return(p);
}

// int main(int argc, char **argv)
// {
// 	(void) argc;
// 	char const *string = (char const *) argv[1];
// 	unsigned int sub = (unsigned int) atoi(argv[2]);
// 	size_t tamanho = (size_t)atoi(argv[3]);
// 	// size_t tamanho = (size_t)sizeof(argv[1]);
// 	printf("%s\n", ft_substr( string, sub,tamanho));
// 	return(0);
// }
