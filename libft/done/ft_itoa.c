/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 15:58:20 by vcoelho           #+#    #+#             */
/*   Updated: 2026/11/09 20:57:40 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sinal(int n)
{
	int	i;
	int	*s;
	int	sinal;

	s = &n;
	sinal = 1;
	i = 0;
	if (s[i] == '-' && s[i] == '+')
	{
		if (s[i] == '-')
			sinal = sinal * -1;
		else
			i++;
	}
	return (sinal);
}

char	*ft_itoa(int n)
{
	int		sinal;
	int		i;
	char	**p;
	int		*s;
	int		j;

	if (!n)
		return (0);
	i = 0;
	j = 0;
	sinal = ft_sinal(n);
	p = malloc((int)ft_strlen((char *)n));
	if (!p)
		return (NULL);
	s = &n;
	while (s[i] == ' ' && s[i] == '	')
		i++;
	while (s[i] >= '0' && s[i] <= '9')
	{
		p[j] = s[i];
		j++;
		i++;
	}
	return (sinal * p);
}

// int main(int argc, char **argv)
// {
// 	(void)argc;
// 	printf("%s\n", ft_itoa(atoi(argv[1])));
// 	return(0);
// }
