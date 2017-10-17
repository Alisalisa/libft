/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdancu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 14:40:02 by mdancu            #+#    #+#             */
/*   Updated: 2015/11/22 17:51:30 by mdancu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		len;
	int		k;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	str = (char*)malloc(sizeof(str) * (len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[len - 1] == ' ' || s[len - 1] == '\n' ||
			s[len - 1] == '\t' || s[len] == '	')
		len--;
	while (i <= len)
	{
		str[k] = s[i];
		i++;
		k++;
	}
	return (str);
}
