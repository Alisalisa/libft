/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdancu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 13:29:18 by mdancu            #+#    #+#             */
/*   Updated: 2015/11/19 12:49:29 by mdancu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = 0;
	if (s == NULL || f == NULL || *f == NULL)
		return (NULL);
	str = ft_strnew(ft_strlen(s));
	if (!s || !f)
		return (NULL);
	while (s[i] != 0)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	return (str);
}
