/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   factorial.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 09:20:02 by vcoelho           #+#    #+#             */
/*   Updated: 2026/09/19 09:20:02 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	a;

	a = 1;
	while(nb > 0)
	{
		a = a * nb;
		nb--;
	}
	if(nb == 0)
	{
		return(a);
	}
	while( nb < 0)
	{
		return(0);
	}
	return (a);
}

// int main(int argc, char **argv)
// {
//     if(argc == 2)
//         printf("%d\n", ft_iterative_factorial(atoi(argv[1])));
//     return(0);
// }
