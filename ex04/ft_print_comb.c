/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekekae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 15:00:07 by jekekae           #+#    #+#             */
/*   Updated: 2020/07/10 16:50:49 by jekekae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar ( char c);
void ft_print_comb(void)
{
    char a = '0';
	char b = '0';
	char c = '0';

	while (a <= '9')
	 { 
		 while (b <= '9')
		 {
			 while (c <= '9')
			 {
				  if (a < b && b < c)
				  {
				     ft_putchar(a);
				     ft_putchar(b);
				     ft_putchar(c);

				     ft_putchar(',');
				     ft_putchar(' ');
				   }
				 c++;
			 }
			 c = '0';
			 b++;
		  }
		 b = '0';
		 a++;
	 }
}



