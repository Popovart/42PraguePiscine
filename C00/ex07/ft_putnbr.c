/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpopov <dpopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 20:03:28 by dpopov            #+#    #+#             */
/*   Updated: 2024/08/07 20:14:13 by dpopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

void ft_putnbr(int nb){
    char buffer[12];
    int length = snprintf(buffer, sizeof(buffer), "%d", nb);  
    write(1, buffer, length);
}

int main() {
    ft_putnbr(42);
    return 0;
}