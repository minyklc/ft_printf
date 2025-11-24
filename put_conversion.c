/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_conversion.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpple <minpple@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:44:04 by minpple           #+#    #+#             */
/*   Updated: 2025/11/24 16:31:30 by minpple          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_c(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_s(char *s)
{
	int	i;

	i = 0;
	if (!s)
	{
		write (1, "(null)", 6);
		return (6);
	}
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_u(unsigned long u, int n)
{
	if (u < 0)
		u = -u;
	if (u > 9)
		n = ft_u(u / 10, n++);
	u = u % 10 + 48;
	write(1, &u, 1);
	return (n + 1);
}

int	ft_percent(void)
{
	write(1, "%%", 1);
	return (1);
}
