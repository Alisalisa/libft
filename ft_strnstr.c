/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdancu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/25 15:05:30 by mdancu            #+#    #+#             */
/*   Updated: 2015/11/22 16:53:46 by mdancu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (*s2 != 0 && ft_strlen(s2) <= n)
	{
		while (s1[i] != 0 && i != n)
		{
			j = 0;
			while (s1[i + j] == s2[j] && s1[i + j] != 0)
				j++;
			if (i + j > n)
				return (NULL);
			if (s2[j] == 0)
				return ((char *)&s1[i]);
			i++;
		}
	}
	if (*s2 == 0)
		return ((char *)s1);
	return (NULL);
}
