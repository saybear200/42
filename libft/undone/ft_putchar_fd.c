/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 15:13:06 by vcoelho           #+#    #+#             */
/*   Updated: 2026/11/14 15:24:11 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main(int argc, char **argv)
// {
// 	(void)argc;
// 	ft_putchar_fd(argv[1][0], atoi(argv[2]));
// 	return (0);
// }
