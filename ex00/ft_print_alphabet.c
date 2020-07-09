/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekekae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 10:40:58 by jekekae           #+#    #+#             */
/*   Updated: 2020/07/09 15:17:22 by jekekae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */#include <unistd.h>
void ft_putchar(char c);

void ft_print_alphabet(void)
{
       char start;
	   char end;
       
	   start = 'a';
		end  = 'z';

	  while (start <= end)
	  {ft_putchar(start);
	    start++;}	
	ft_putchar('\n');  
}

