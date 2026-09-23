/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_reader2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadeira <dmadeira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 15:48:45 by dmadeira          #+#    #+#             */
/*   Updated: 2026/09/23 15:49:58 by dmadeira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
