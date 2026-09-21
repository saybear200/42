/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 12:55:48 by vcoelho           #+#    #+#             */
/*   Updated: 2026/09/21 13:01:05 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main (int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while(argc > 1)
	{
		while(argv[i])
		{
			j = 0;
			while(argv[i][j])
			{
				write(1, &argv[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i--;
		}
	}
	return(0);
}
