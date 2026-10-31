/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 07:39:59 by vcoelho           #+#    #+#             */
/*   Updated: 2026/10/31 07:46:59 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

// int main(int argc, char **argv)
// {
// 	(void) argc;
// 	printf("%d\n", ft_strlen(argv[1]));
// 	printf("%ld\n", strlen(argv[1]));
// 	return(0);
// }
