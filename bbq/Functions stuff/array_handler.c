/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadeira <dmadeira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 11:28:00 by dmadeira          #+#    #+#             */
/*   Updated: 2026/09/23 15:42:57 by dmadeira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Create an array where {max value, x of max, y of max}

int	*max_sqr_loc(int **grid, int col, int row)
{
	int	x;
	int	y;
	int	*res;

	x = 0;
	y = 0;
	while (x < 3)
		res[x++] = 0;
	x = 0;
	while (y < row)
	{
		while (x < col)
		{
			if (grid[y][x] > res[0])
			{
				res[0] = (grid[y][x]);
				res[1] = x;
				res[2] = y;
			}
		}
	}
	return (res);
}

void	print_map(int *res, int **grid, int col, int row)
{
	int	x;
	int	y;

	while (y < col)
	{
		while (x < row)
		{
			if (grid[y][x] == 0)
				write(1, "o", 1);
			else if ((y >= res[2] || y < res[2] + res[0]) && (x >= res[1] || x < res[1] + res[0]))
				write(1, ".", 1);
			else
				write(1, ".", 1);
			x++;
		}
		x = 0;
		y++;
	}
}
