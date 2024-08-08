/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitrypopov <dmitrypopov@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 15:04:42 by dpopov            #+#    #+#             */
/*   Updated: 2024/08/08 13:22:06 by dmitrypopov      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "unistd.h"

void	ft_print_comb2(void)
{
	int i;
	int j;
	char buffer[7];

	i = 0;
	j = 1;
	while (i <= 98)
	{
		while (j <= 99)
		{
			buffer[0] = i / 10 + '0';
			buffer[1] = i % 10 + '0';
			buffer[2] = ' ';
			buffer[3] = j / 10 + '0';
			buffer[4] = j % 10 + '0';
			if (i == 98 && j == 99)
			{
				write(1, buffer, 5);
			}
			else
			{
				buffer[5] = ',';
				buffer[6] = ' ';
				write(1, buffer, 7);
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}