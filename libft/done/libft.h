/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 09:11:55 by vcoelho           #+#    #+#             */
/*   Updated: 2026/10/31 17:25:22 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strnstr(char *ls, char *ss, size_t size);

int	ft_toupper(int c);

int	ft_tolower(int c);

char	*ft_strnstr(char *ls, char *ss, size_t size);

int	ft_strncmp(char *s1, char *s2, int j);

int	ft_strlen(char *str);

int	ft_strlcpy(char *dest, char *src, int i);

int	ft_strlcat(char *dest, char *src, size_t size);

char	*ft_strdup(char *src);

int	ft_isprint(int c);

int	ft_isdigit(int c);

int	ft_isascii(int i);

int	ft_isalpha(int c);

int	ft_isalnum(int c);

int	ft_atoi(char *str);

char	*ft_strchr(const char *str, char chr);

char	*ft_strrchr(const char *str, int c);

// typedef struct s_list;
#endif
