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

}

int	main(int argc, char **argv)
{
	if(argc == 2)
	{
		printf("%d\n", ft_recursive_power(atoi(argv[1])));
	}
	return(0);
}
