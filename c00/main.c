/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcuesta- <rcuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 13:11:45 by rcuesta-          #+#    #+#             */
/*   Updated: 2020/02/10 13:20:05 by rcuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "./ex00/ft_putchar.c"
#include "./ex01/ft_print_alphabet.c"
#include "./ex02/ft_print_reverse_alphabet.c"
#include "./ex03/ft_print_numbers.c"
#include "./ex04/ft_is_negative.c"
#include "./ex05/ft_print_comb.c"
#include "./ex06/ft_print_comb2.c"
#include "./ex07/ft_putnbr.c"
//#include "./ex08/ft_print_combn.c"

int	main(void)
{
	ft_putchar('r');
	printf("\n");
	ft_print_alphabet();
	printf("\n");
	ft_print_reverse_alphabet();
	printf("\n");
    ft_print_numbers();
    printf("\n");
    ft_is_negative(-5);
    printf("\n");
    ft_print_comb();
    printf("\n");
	ft_print_comb2();
	printf("\n");
	ft_putnbr(42);
	printf("\n");
//	ft_print_combn();
//	printf("\n");
}
