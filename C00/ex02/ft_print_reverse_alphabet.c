/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitrypopov <dmitrypopov@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 11:23:53 by dpopov            #+#    #+#             */
/*   Updated: 2024/08/08 13:20:05 by dmitrypopov      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_print_reverse_alphabet(void)
{
	char buffer[26];
	char c;
	int i;

	i = 0;
	c = 'z';
	while (i < 26)
	{
		buffer[i] = c;
		i++;
		c--;
	}
	write(1, buffer, 26);
}