/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcuesta- <rcuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 09:50:41 by rcuesta-          #+#    #+#             */
/*   Updated: 2020/02/27 11:16:18 by rcuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "./ex00/ft_strlen.c"
#include "./ex01/ft_putstr.c"
#include "./ex02/ft_putnbr.c"
#include "./ex03/ft_atoi.c"
#include "./ex04/ft_putnbr_base.c"

int main(void)
{
	//EX00
	printf("EX00\n");
	int n00;
	char *tab = "PRUEBA";
	n00 = ft_strlen(tab);
	printf("hola %s\n", tab);


	//EX01
	printf("\n");
	printf("EX01\n");
	ft_putstr("raquel\n");
	printf("\n");

	
	//EX02
	printf("\n");
	printf("EX02\n");
	ft_putnbr(42);
	printf("\n");

	
	//EX03
	printf("\n");
	printf("EX03\n");
	char str[] = ("---+--+1234ab567");
	printf("%d\n", ft_atoi(str));


	//EX04
	printf("\n");
	printf("EX04\n");
	int n40;
	n40 = 5;
	ft_putnbr_base(n40, "poniguay");
	printf("\n");
}
