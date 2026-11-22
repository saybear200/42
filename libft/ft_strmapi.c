/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 08:13:59 by vcoelho           #+#    #+#             */
/*   Updated: 2026/11/21 09:22:46 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	if(!s || !f)
		return (NULL);
	int		i;
	char	*p;

	i = 0;
	p = ft_strdup((char *)s);
	if(!p)
		return(NULL);
	while (p[i])
	{
		p[i] = f(i, p[i]);
		i++;
	}
	if(!p)
		return(NULL);
	return (p);
}

// char ft_toupper_wrapper(unsigned int i, char c)
// {
// 	(void)i;
// 	return (ft_toupper(c));
// }

// int main(int argc, char **argv)
// {
// 	(void)argc;
// 	printf("%s\n", ft_strmapi(argv[1], ft_toupper_wrapper));
// 	return(0);
// }
