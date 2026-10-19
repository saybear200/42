/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 17:43:33 by vcoelho           #+#    #+#             */
/*   Updated: 2026/10/19 17:58:24 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	(void) argc;
	int i;
	int j;

	i = 1;
	j = 0;

	while(argv[i] == argv[i + 1])
		i++;
	if(argv[i] != argv[i + 1])
	{
		j = 0;
		if(argv[i][j] > argv[i][j + 1])
		{
			argv[i][j + 1] = argv[i][j];
			argv[i][j] = argv[i][j + 1];
			j++;
		}
	}
	while(argv[i])
		ft_putchar(argv)
	return(0);
}
