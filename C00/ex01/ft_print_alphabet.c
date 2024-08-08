/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitrypopov <dmitrypopov@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 11:21:36 by dpopov            #+#    #+#             */
/*   Updated: 2024/08/08 13:21:35 by dmitrypopov      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_print_alphabet(void)
{
	char buffer[26];
	char c;
	int i;

	i = 0;
	c = 'a';
	while (i < 26)
	{
		buffer[i] = c;
		i++;
		c++;
	}
	write(1, buffer, 26);
}