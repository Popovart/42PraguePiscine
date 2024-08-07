/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpopov <dpopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 15:04:42 by dpopov            #+#    #+#             */
/*   Updated: 2024/08/07 17:44:57 by dpopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "unistd.h"

void	ft_print_comb2(void)
{
	char	buffer[6];
	int		i;
	int		j;
	int		param;

	i = 0;
	param = 0;
	while (i <= 99)
	{
		j = param;
		while (j <= 99)
		{
			if (i != j)
			{
				snprintf(buffer, sizeof(buffer), "%02d %02d", i, j);
				write(1, buffer, 5);
				write(1, ", ", 2);
			}
			j++;
		}
		if (param == 0)
		{
			param = 2;
		}
		else
		{
			param++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
