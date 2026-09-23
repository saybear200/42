
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

char	ft_read(char *file, int i)
{
	int		fd;
	int		bytes;
	char	buffer;
	int		j;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		write(1, "open falhou\n", 10);
		return (0);
	}
	buffer = 'd';
	bytes = 1;
	j = 0;
	while (bytes > 0)
	{
		bytes = read(fd, &buffer, 1);
		if (j == i)
		{
			return (buffer);
		}
		j++;
	}
	close(fd);
	return (0);
}

int	file_len(char *file)
{
	int		fd;
	int		bytes;
	char	buffer;
	int		j;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		write(1, "open falhou\n", 10);
		return (0);
	}
	buffer = 'd';
	bytes = 1;
	j = 0;
	while (bytes > 0)
	{
		bytes = read(fd, &buffer, 1);
		j++;
	}
	return (j);
}

int	calc_col(char *file)
{
	int	col;
	int	i;

	i = 0;
	col = 0;
	while (ft_read(file, i) != '\n')
		i++;
	i++;
	while (ft_read(file, i) != '\n')
	{
		i++;
		col++;
	}
	return (col);
}

int	calc_row(char *file)
{
	int		col;
	int		i;
	char	c;

	i = 0;
	col = 0;
	c = ft_read(file, i);
	while (c >= '0' && c <= '9')
	{
		col = col * 10 + (c - '0');
		i++;
		c = ft_read(file, i);
	}
	return (col);
}

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

int	*max_sqr_loc(int *res, int **grid, int col, int row)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
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
			x++;
		}
		y++;
		x = 0;
	}
	return (res);
}

void	print_map(int *res, int **grid, int col, int row)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < row)
	{
		while (x < col)
		{
			if (grid[y][x] == 0)
				write(1, "o", 1);
			else if ((y <= res[2] && y > res[2] - res[0]) && (x <= res[1] && x > res[1] - res[0]))
				write(1, "x", 1);
			else
				write(1, ".", 1);
			x++;
		}
		x = 0;
		y++;
		write(1, "\n", 1);
	}
}

int ft_min(int a, int b, int c)
{
	if(a > b)
		a = b;
	if(a > c)
		a = c;
	return(a);

}

int	calc_map_array(int **grid, int col, int row)
{
	int	y;
	int	x;

	y = 1;
	x = 1;
	while (y >= 1 && y < row)
	{
		while (x >= 1 && x < col)
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

int main(int argc, char **argv)
{
	char *file = argv[1];
	int col = calc_col(file);
	int row = calc_row(file);
	int **grid = map_array(file);
	grid = fill_map_array(grid, file, col, row);
	calc_map_array(grid, col, row);
	int	res[3];
	res[0] = 0;
	max_sqr_loc(res, grid, col, row);
	print_map(res, grid, col, row);
}
