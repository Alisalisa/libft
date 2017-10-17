/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdancu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 16:40:11 by mdancu            #+#    #+#             */
/*   Updated: 2015/11/02 09:53:37 by mdancu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *new;

	new = (char *)malloc(sizeof(new) * ft_strlen(s1));
	if (!new)
		return (NULL);
	else
	{
		ft_strcpy(new, s1);
		return (new);
	}
}
