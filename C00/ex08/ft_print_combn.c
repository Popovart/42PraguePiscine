/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpopov <dpopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 20:11:53 by dpopov            #+#    #+#             */
/*   Updated: 2024/08/07 20:25:18 by dpopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

void ft_print_combn(int n) {
    char buffer[3];
    int length = snprintf(buffer, sizeof(buffer), "%d", n);  

    
    
    write(1, buffer, length);
};

int main() {
    ft_print_combn(4);
    return 0;
}