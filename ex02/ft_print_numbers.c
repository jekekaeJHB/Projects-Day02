/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekekae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 10:21:20 by jekekae           #+#    #+#             */
/*   Updated: 2020/07/10 10:29:46 by jekekae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void  ft_putchar(char c);

void  ft_print_numbers(void)
{ 
       char start;
	   char end;

	  start = '0';
	  end = '9';
	    while (start <= end)
	    {
		   ft_putchar(start);
		   start++;
		}
       
   
