/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 07:50:14 by vcoelho           #+#    #+#             */
/*   Updated: 2026/10/31 16:53:59 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

//ls - largestring
//ss - smallstring
char *ft_strnstr(const char *ls, char *ss, size_t size)
{
	unsigned int	i;
	unsigned int	j = 0;

	i = 0;
	if(ss[j] == '\0')
	{
		return((char *)ls);
	}
	while(ls[i] && i < size)
	{
		j = 0;
		while(ls[i] != ss[j])
			i++;
		while (ss[j] && i + j < size && ls[i + j] == ss[j])
		{
			j++;
		}
		if(ss[j] == '\0')
			return((char *)&ls[i]);
	}
	return(NULL);
}

// int main(int argc, char **argv)
// {
// 	(void) argc;
// 	printf("%s\n", ft_strnstr(argv[1], argv[2], 3));
// 	printf("%d\n", strnstr(argv[1], argv[2], 3));
// 	return(0);
// }
