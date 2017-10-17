/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdancu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/26 11:51:08 by mdancu            #+#    #+#             */
/*   Updated: 2015/11/02 09:40:46 by mdancu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *sir;

	if (len == 0)
		return (b);
	sir = (unsigned char *)b;
	while (len != 0)
	{
		*sir = (unsigned char)c;
		sir++;
		len--;
	}
	return (b);
}
