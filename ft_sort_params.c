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

int ft_strcmp(char *s1, char *s2)
{
	int i;
	int a;

	i = 0;
	while(s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	a = s1[i] - s2[i];
	return(a);
}

void ft_swap(char **a, char **b)
{
	char *temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while(i < argc - 1)
	{
		j = i + 1;
		while(j < argc)
		{
			if(ft_strcmp(argv[i], argv[j]) > 0)
				ft_swap(&argv[i], &argv[j]);
			j++;
		}
		i++;
	}
	i = 1;
	while(i < argc)
	{
		j = 0;
		while(argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return(0);
}
