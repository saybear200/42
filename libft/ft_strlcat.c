/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 07:39:34 by vcoelho           #+#    #+#             */
/*   Updated: 2026/11/21 15:06:50 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int				i;
	int				j;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	dest_len = ft_strlen(dst);
	j = dest_len;
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	if (size < dest_len)
		return (src_len + size);
	else
	{
		while (src[i] && (dest_len + i) < size)
			dst[j++] = src[i++];
		if ((dest_len + i) == size && dest_len < size)
			dst[--j] = '\0';
		else
			dst[j] = '\0';
		return (src_len + dest_len);
	}
}

// int main(int argc, char **argv)
// {
// 	(void) argc;
// 	printf("%zu\n", ft_strlcat(argv[1], argv[2], atoi(argv[3])));
// 	return(0);
// }
