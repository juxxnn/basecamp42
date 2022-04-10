/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtadeu-d <jtadeu-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 03:30:54 by jtadeu-d          #+#    #+#             */
/*   Updated: 2022/04/10 04:18:05 by jtadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	c;
	int	l;

	l = 0;
	while (l < y)
	{
		c = 0;
		while (c < x)
		{
			if ((l == 0 && c == 0) || (c > 1 && l > 1
					&& c == x - 1 && l == y - 1))
				ft_putchar(65);
			else if ((l == 0 && c == x - 1) || (c == 0 && l == y - 1))
				ft_putchar(67);
			else if ((c > 0 && c < x) && (l == 0 || l == y - 1))
				ft_putchar(66);
			else if ((l > 0 && l < y) && (c == 0 || c == x - 1))
				ft_putchar(66);
			else
				ft_putchar(' ');
		c++;
		}
		ft_putchar('\n');
		l++;
	}
}
