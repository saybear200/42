/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 15:39:57 by vcoelho           #+#    #+#             */
/*   Updated: 2026/11/21 09:15:32 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;
	char			c;

	nb = n;
	if (nb < 0)
	{
		write (fd, "-", 1);
		nb = (unsigned int)(-(long)n);
	}
	if (nb > 9)
		ft_putnbr_fd(nb / 10, fd);
	c = (nb % 10) + '0';
	write (fd, &c, 1);
}

// int main(int argc, char **argv)
// {
// 	(void)argc;
// 	int nbr = atoi(argv[1]);
// 	int fd = atoi(argv[2]);
// 	ft_putnbr_fd(nbr, fd);
// 	return(0);
// }
