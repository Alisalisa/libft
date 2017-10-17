/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdancu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 18:21:16 by mdancu            #+#    #+#             */
/*   Updated: 2015/11/02 18:24:47 by mdancu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t stop;

	i = 0;
	while (dst[i] != 0 && i < size)
		i++;
	stop = i;
	while (src[i - stop] && i < size - 1)
	{
		dst[i] = src[i - stop];
		i++;
	}
	if (stop < size)
		dst[i] = '\0';
	return (stop + strlen(src));
}
