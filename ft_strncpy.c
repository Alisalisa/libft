/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdancu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 16:45:13 by mdancu            #+#    #+#             */
/*   Updated: 2015/11/22 17:46:36 by mdancu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t i;

	i = 0;
	while (i != n && src[i] != 0)
	{
		dst[i] = src[i];
		i++;
	}
	while (i != n)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}