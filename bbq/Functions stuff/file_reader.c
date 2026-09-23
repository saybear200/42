/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_reader.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadeira <dmadeira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 19:17:06 by dmadeira          #+#    #+#             */
/*   Updated: 2026/09/23 15:48:19 by dmadeira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
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

int	main(int argc, char **argv)
{
	char	c;

	(void) argc;
	c = ft_read(argv[1], 6);
	write(1, &c, 1);
}
