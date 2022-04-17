/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtadeu-d <jtadeu-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 21:40:20 by jtadeu-d          #+#    #+#             */
/*   Updated: 2022/04/15 04:21:05 by jtadeu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	limitadora(char A, char B, char C)
{
	write (1, &A, 1);
	write (1, &B, 1);
	write (1, &C, 1);
	if (A != '7' || B != '8' || C != '9')
		write (1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	n1;
	char	n2;
	char	n3;

	n1 = '0';
	while (n1 <= '7')
	{
		n2 = n1 + 1;
		while (n2 <= '8')
		{
			n3 = n2 + 1;
			while (n3 <= '9')
			{
				limitadora(n1, n2, n3);
				n3++;
			}
			n2++;
		}
		n1++;
	}
}
