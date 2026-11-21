/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 07:37:39 by vcoelho           #+#    #+#             */
/*   Updated: 2026/11/16 10:03:05 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sinal(char *str)
{
	int	sinal;
	int	j;

	sinal = 1;
	j = 0;
	if (str[j] == '-')
		sinal = -sinal;
	j++;
	return (sinal);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	a;
	int	sinal;

	a = 0;
	i = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	sinal = ft_sinal((char *)nptr);
	if(nptr[i] < 0)
	{
		write(1, "-", 1);
		sinal = -sinal;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		a = (a * 10) + (nptr[i] - '0');
		i++;
	}
	return (a * sinal);
}

/*int main(int argc, char **argv)
{
	(void) argc;
	printf("%d\n", ft_atoi(argv[1]));
	printf("%d\n", atoi(argv[1]));
	return(0);
}*/
