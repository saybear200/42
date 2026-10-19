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

	i = argc - 1;
	j = 1;
	if(argc > 1)
	{
		while(i > 0)
		{
			j = 0;
			while(argv[i][j] && i > 0)
			{
				write(1, &argv[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i--;
		}
	}
	i = '\0';
	return(0);
}
