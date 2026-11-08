/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 15:58:22 by vcoelho           #+#    #+#             */
/*   Updated: 2026/11/07 16:34:31 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
    char **p;
    int i = 0;
    int s1size;
    int s2size;

    if(!s)
        return(NULL);
    if(!c)
        return(s);
    while(s[i] != c)
        i++;
    s2size = i;
    s1size = (char *)ft_strlen(s) - s2size;
    p = malloc(s1size + s2size);
    i = 0;
    while(i < s1size)
    {
        p[i] = s[i];
        i++;
    }
}

int main(int argc, char **argv)
{
    (void) argc;
    int character = argv[2];
    char const *string = (char const *) argv[1];
    printf("%s\n", ft_split(string, character));
    return(0);
}