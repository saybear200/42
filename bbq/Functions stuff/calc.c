/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadeira <dmadeira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 15:57:06 by dmadeira          #+#    #+#             */
/*   Updated: 2026/09/23 15:57:07 by dmadeira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "min.c"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_min(int a, int b, int c);

int	calc_map_array(int **grid, int col, int row)
{
	int	y;
	int	x;

	y = 0;
	x = 0;
	while (y >= 1 && y < row)
	{
		while (x >= 1 && y < col)
		{
			if (grid[y][x] > 0)
			{
				grid[y][x] = 1 + ft_min(grid[y - 1][x], grid[y][x - 1], grid[y - 1][x - 1]);
			}
			x++;
		}
		y++;
		x = 0;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	(void) argc;
	printf("%d\n", calc_map_array(atoi(argv[1]), atoi(argv[2]), atoi(argv[3])));
	return (0);
}
