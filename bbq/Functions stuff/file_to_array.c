/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_to_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadeira <dmadeira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 18:30:13 by dmadeira          #+#    #+#             */
/*   Updated: 2026/09/23 15:45:23 by dmadeira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int	**map_array(char *file)
{
	int	**grid;
	int	row;
	int	col;
	int	i;

	row = calc_row(file);
	col = calc_col(file);
	grid = malloc(row * sizeof(int *));
	if (!grid)
		return (0);
	i = 0;
	while (i < row)
	{
		grid[i] = malloc(col * sizeof(int));
		if (!grid[i])
			return (0);
		i++;
	}
	return (grid);
}

int	**fill_map_array(int **grid, char *file, int col, int row)
{
	int		i;
	int		x;
	int		y;
	char	c;

	i = 1;
	x = 0;
	y = 0;
	while (ft_read(file, i - 1) != '\n')
		i++;
	while (y < row)
	{
		while (x < col)
		{
			c = ft_read(file, i);
			i++;
			if (c == '.')
				grid[y][x] = 1;
			else if (c == 'o')
				grid[y][x] = 0;
			x++;
		}
		y++;
		x = 0;
		i++;
	}
	return (grid);
}

void	print_array(int **grid, int col, int row)
{
	int		y;
	int		x;
	char	c;

	y = 0;
	while (y < row)
	{
		x = 0;
		while (x < col)
		{
			if (grid[y][x] == 1)
				c = '1';
			else
				c = '0';
			write(1, &c, 1);
			x++;
		}
		write(1, "\n", 1);
		y++;
	}
}

//int	main(int argc, char **argv)
//{
//	int		col;
//	int		row;
//	int		**grid;
//	char	*file;

//	file = argv[1];
//	col = calc_col(file);
//	row = calc_row(file);
//	grid = map_array(file);
//	grid = fill_map_array(grid, file, col, row);
//	print_array(grid, col, row);
//	(void) argc;
//}
