/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 09:20:10 by vcoelho           #+#    #+#             */
/*   Updated: 2026/09/19 09:20:10 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	while(nb < 0)
	{
		return(0);
	}
	while(nb <= 1)
	{
		return(1);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}

// int main(int argc, char **argv)
// {
//     if(argc == 2)
//     {
//         printf("%d\n", ft_recursive_factorial(atoi(argv[1])));
//     }
//     return(0);
// }
