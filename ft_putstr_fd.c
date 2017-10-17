/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdancu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 11:05:30 by mdancu            #+#    #+#             */
/*   Updated: 2015/11/02 09:47:38 by mdancu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	int a;

	a = 0;
	while (s[a] != 0)
	{
		ft_putchar_fd(s[a], fd);
		a++;
	}
}
