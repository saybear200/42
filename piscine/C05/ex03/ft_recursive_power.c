/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 11:16:45 by vcoelho           #+#    #+#             */
/*   Updated: 2026/09/20 11:19:38 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int ft_recursive_power(int nb, int power)
{
	if(power == 0)
		return(1);
	if(power < 0)
		return(0);
	return nb * ft_recursive_power(nb, power - 1);
}

int	main(int argc, char **argv)
{
	if(argc == 3)
	{
		printf("%d\n", ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
	}
	return(0);
}
