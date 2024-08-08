/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpopov <dpopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 20:03:28 by dpopov            #+#    #+#             */
/*   Updated: 2024/08/08 16:10:54 by dpopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "unistd.h"

void	write_nm(int nb)
{
	char	c;

	if (nb <= 9)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
	else
	{
		write_nm(nb / 10);
		write_nm(nb % 10);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483647)
	{
		write(1, "-", 1);
		write_nm(2147483647);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		write_nm(-nb);
		return ;
	}
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	write_nm(nb);
}
