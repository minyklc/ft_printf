/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpple <minpple@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 14:46:05 by minpple           #+#    #+#             */
/*   Updated: 2025/11/24 16:57:40 by minpple          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_p(unsigned long p, char *base, int n)
{
	if (n == 0)
	{
		write(1, "0x", 2);
		n = n + 2;
	}
	if (p < 0)
	{
		p = -p;
		write(1, "-", 1);
		n++;
	}
	if (p > 15)
		n = ft_p(p / 16, base, n + 1);
	p = p % 16;
	write(1, &base[p], 1);
	return (n + 1);
}

int	ft_d(int d, int n)
{
	if (d == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (d < 0)
	{
		d = -d;
		write(1, "-", 1);
		n++;
	}
	if (d > 9)
		n = ft_d(d / 10, n++);
	d = d % 10 + 48;
	write(1, &d, 1);
	return (n + 1);
}

int	ft_x(unsigned long x, char *base, int n)
{
	if (x < 0)
	{
		x = -x;
		write(1, "-", 1);
		n++;
	}
	if (x >= 16)
		n = ft_x(x / 16, base, n++);
	x = x % 16;
	write(1, &base[x], 1);
	return (n + 1);
}

int	ft_bigx(long X, char *base, int n)
{
	if (X == -2147483648)
	{
		write(1, "-80000000", 11);
		return (9);
	}
	if (X < 0)
	{
		X = -X;
		write(1, "-", 1);
		n++;
	}
	if (X >= 16)
		n = ft_bigx(X / 16, base, n++);
	X = X % 16;
	write(1, &base[X], 1);
	return (n + 1);
}
