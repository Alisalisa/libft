/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdancu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/12 11:52:57 by mdancu            #+#    #+#             */
/*   Updated: 2015/11/22 18:36:57 by mdancu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	generate_string(char *s, int c, int semn, long long int aux2)
{
	s[c] = 0;
	s[0] = '0';
	s[c + 1] = 0;
	if (semn == 1)
		s[0] = '-';
	else
		c--;
	while ((c >= 0 && semn == 0) || c > 0)
	{
		s[c] = aux2 % 10 + '0';
		c--;
		aux2 = aux2 / 10;
	}
}

static void	negate(long long *a, long long *b, int *s)
{
	*a *= -1;
	*b *= -1;
	*s = 1;
}

char		*ft_itoa(int n)
{
	int					c;
	long long int		aux;
	long long int		aux2;
	int					semn;
	char				*s;

	c = 0;
	aux = (long long int)n;
	aux2 = (long long int)n;
	semn = 0;
	if (aux < 0)
		negate(&aux, &aux2, &semn);
	while (aux > 0)
	{
		aux = aux / 10;
		c++;
	}
	s = (char *)malloc(c + 2);
	if (s == NULL)
		return (NULL);
	generate_string(s, c, semn, aux2);
	return (s);
}
