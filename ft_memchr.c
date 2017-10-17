/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdancu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 12:37:14 by mdancu            #+#    #+#             */
/*   Updated: 2015/11/19 13:25:43 by mdancu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	c1;
	size_t			i;

	i = 0;
	c1 = (unsigned char)c;
	s1 = (unsigned char *)s;
	if (s != NULL)
	{
		while (n--)
		{
			if (s1[i] == c1)
				return (s1 + i);
			i++;
		}
	}
	return (NULL);
}
