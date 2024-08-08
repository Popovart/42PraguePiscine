/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitrypopov <dmitrypopov@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 21:50:33 by dmitrypopov       #+#    #+#             */
/*   Updated: 2024/08/08 22:21:25 by dmitrypopov      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_swap(int *a, int *b)
{
	int		temp;
	char	c1;
	char	c2;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	return (0);
}
