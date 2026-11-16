/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 09:11:55 by vcoelho           #+#    #+#             */
/*   Updated: 2026/11/16 10:10:44 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

char *ft_strnstr(const char *big, const char *little, size_t len);

int	ft_toupper(int c);

int	ft_tolower(int c);

int	ft_strncmp(const char *s1, const char *s2, size_t n);

size_t	ft_strlen(const char *s);

int	ft_strlcpy(char *dest, char *src, int i);

int	ft_strlcat(char *dest, char *src, size_t size);

char	*ft_strdup(char *src);

int	ft_isprint(int c);

int	ft_isdigit(int c);

int	ft_isascii(int i);

int	ft_isalpha(int c);

int	ft_isalnum(int c);

int	ft_atoi(const char *nptr);

char	*ft_strchr(const char *str, char chr);

char	*ft_strrchr(const char *str, int c);

void	*ft_memset(void *s, int c, size_t n);

char	*ft_strtrim(char const *s1, char const *set);

void	*ft_memchr(const void *s, int c, size_t n);

int	ft_memcmp(const void *s1, const void *s2, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n);

void	*ft_memset(void *s, int c, size_t n);

void	*ft_calloc(size_t nmemb, size_t size);

char	*ft_itoa(int n);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	**ft_split(char const *s, char c);

void ft_striteri(char *s, void (*f)(unsigned int, char*));

void ft_putchar_fd(char c, int fd);

void ft_putstr_fd(char *s, int fd);

char	*ft_strjoin(char const *s1, char const *s2);
typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;
#endif
