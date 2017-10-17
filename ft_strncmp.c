/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdancu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 16:43:48 by mdancu            #+#    #+#             */
/*   Updated: 2015/11/22 17:52:35 by mdancu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s3;
	unsigned char	*s4;

	s3 = (unsigned char *)s1;
	s4 = (unsigned char *)s2;
	i = 0;
	while (i < n && (*s3 != '\0' || *s4 != '\0'))
	{
		if (*s3 != *s4)
			return (*s3 - *s4);
		if (*s3 == '\0' && *s4 == '\0')
			return (0);
		i++;
		s3++;
		s4++;
	}
	return (0);
}
