/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpopov <dpopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 20:03:28 by dpopov            #+#    #+#             */
/*   Updated: 2024/08/08 15:50:33 by dpopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "unistd.h"

void	reverse(char *str, int length)
{
	int		start;
	int		end;
	char	temp;

	end = length - 1;
	start = 0;
	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}

int	isIntMin(int num, char *str, int *length)
{
	if (num == -2147483648)
	{
		*length = 11;
		str = "-2147483648";
		reverse(str, *length);
		return (0);
	}
	return (0);
}

void	toString(int num, char *str, int *length)
{
	int	is_negative;

	if (isIntMin(num, str, length) == 1)
	{
		return ;
	}
	is_negative = 0;
	if (num < 0)
	{
		is_negative = 1;
		num = -num;
	}
	while (num > 0)
	{
		str[(*length)++] = num % 10 + '0';
		num = num / 10;
	}
	if (is_negative)
	{
		str[(*length)++] = '-';
	}
	str[*length] = '\0';
	reverse(str, *length);
}



void	ft_putnbr(int nb)
{
	char	buffer[13];
	int		length;

	length = 0;
	toString(nb, buffer, &length);
	write(1, buffer, length);
}

int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}
