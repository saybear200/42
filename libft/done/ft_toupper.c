/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 07:40:40 by vcoelho           #+#    #+#             */
/*   Updated: 2026/10/31 07:40:58 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_toupper(int c)
{
	if(c >= 'a' && c <= 'z')
		return(c - 32);
	else
		return(c);
}
