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

int	ft_len(int n)
{
	int len;

	len = (n <= 0);
	while(n)
	{
		n /= 10;
		len++;
	}
	return(len);
}

int	ft_nbr(int n)
{
	if (n < 0)
		return (-1);
	return (1);
}

char	*ft_itoa(int n)
{
	long	nbr;
	int		len;
	char	*str;
	int		i;
	int		sign;

	sign = ft_nbr(n);
	nbr = (long)n * sign;
	len = ft_len(n);
	i = len;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[i] = '\0';
	if (sign == -1)
		str[0] = '-';
	if (nbr == 0)
		str[0] = '0';
	while (nbr > 0)
	{
		i--;
		str[i] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (str);
}

int main(int argc, char **argv)
{
	(void) argc;
	printf("%d\n", ft_atoi(ft_itoa((char *)argv[1])));
	return(0);
}
