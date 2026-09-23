/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 15:31:15 by vcoelho           #+#    #+#             */
/*   Updated: 2026/09/20 11:12:59 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnb_rec(long n)
{
	char	c;

	if (n >= 10)
	{
		ft_putnb_rec (n / 10);
	}
	c = (n % 10) + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = n * -1;
	}
	ft_putnb_rec(n);
}

	// int	main(void)
	// {
	// 	ft_putnbr(-2147483648);
	// 	write(1, "\n", 1);
	// 	return (0);
	// }
