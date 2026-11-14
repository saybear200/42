/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 15:06:15 by vcoelho           #+#    #+#             */
/*   Updated: 2026/11/14 15:19:11 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int i;

	i = 0;
	while(s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void ft_tolower_wraper(unsigned int i, char *c)
// {
// 	(void) i;
// 	*c = ft_tolower(*c);
// }

// int main(int argc, char **argv)
// {
// 	(void)argc;
// 	ft_striteri(argv[1], ft_tolower_wraper);
// 	printf("%s\n", argv[1]);
// 	return(0);
// }
