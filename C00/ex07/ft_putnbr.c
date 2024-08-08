/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitrypopov <dmitrypopov@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 20:03:28 by dpopov            #+#    #+#             */
/*   Updated: 2024/08/08 13:22:11 by dmitrypopov      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "unistd.h"

void	ft_putnbr(int nb)
{
	char buffer[12];
	int length;
	int start;
	int end;
	char temp;

	length = 0;
	while (nb > 0)

	{
		buffer[length++] = nb % 10 + '0';

		nb = nb / 10;
	}
	end = length - 1;
	start = 0;
	while (start < end)
	{
		temp = buffer[start];
		buffer[start] = buffer[end];
		buffer[end] = temp;
		start++;
		end--;
	}
	write(1, buffer, length);
}