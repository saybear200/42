/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 09:27:51 by vcoelho           #+#    #+#             */
/*   Updated: 2026/09/20 10:18:26 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int	a;

	if (power < 0)
		return(0);
	if (power == 0)
		return(1);
	a = 1;
	while(power > 0)
	{
		a = a * nb;
		power--;
	}
	return(a);

}

// int	main(int argc, char **argv)
// {
// 	if(argc == 3)
// 	{
// 		printf("%d\n", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
// 	}
// 	return(0);
// }
