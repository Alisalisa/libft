/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdancu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 15:57:29 by mdancu            #+#    #+#             */
/*   Updated: 2015/11/02 10:17:06 by mdancu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *sir;

	sir = (char*)malloc(size + 1);
	if (sir == NULL)
		return (NULL);
	ft_bzero(sir, size + 1);
	return (sir);
}
