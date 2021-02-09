/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcuesta- <rcuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 13:33:23 by rcuesta-          #+#    #+#             */
/*   Updated: 2020/02/17 11:10:40 by rcuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "./ex00/ft_ft.c"
#include "./ex01/ft_ultimate_ft.c"
#include "./ex02/ft_swap.c"
#include "./ex03/ft_div_mod.c"
#include "./ex04/ft_ultimate_div_mod.c"
#include "./ex05/ft_putstr.c"
#include "./ex06/ft_strlen.c"
#include "./ex07/ft_rev_int_tab.c"
#include "./ex08/ft_sort_int_tab.c"

int	main(void)
{
	//	int n0;
	//	ft_ft(&n0);
	//	printf("%d\n", n0);

	//EX00
	printf("EX00\n");
	int naux = 4;
	// & saco la refencia, con * saco la deferencia
	int *n00 = &naux;
	ft_ft(n00);
	printf("%d\n", *n00);

	//EX01
	printf("\n");
	printf("EX01\n");
	int *n10 = &naux;
	int **n11 = &n10;
	int ***n12 = &n11;
	int ****n13 = &n12;
	int *****n14 = &n13;
	int ******n15 = &n14;
	int *******n16 = &n15;
	int ********n17 = &n16;
	int *********n18 = &n17;
	ft_ultimate_ft(n18);
	printf("%d\n", *********n18);

	//EX02
	printf("\n");
	printf("EX02\n");
	int n20 = 4;
	int n21 = 80;
	printf("%d %d\n", n20, n21);
	ft_swap(&n20, &n21);
	printf("%d %d\n", n20, n21);

	//EX03
	printf("\n");
	printf("EX03\n");
	// como son enteros si la division tiene , me saca lo de delante
	int n30 = 3;
	int n31 = 2;
	int n3div;
	int n3rest;
	// & es la referencia/direccion de memoria, para obtener el puntero de una variable normal que yo declaro
	ft_div_mod(n30, n31, &n3div, &n3rest);
	printf("%d %d\n", n3div, n3rest);

	//EX04
	printf("\n");
	printf("EX04\n");
	int n40 = 6;
	int n41 = 3;
	ft_ultimate_div_mod(&n40, &n41);
	printf("%d %d\n", n40 ,n41);

	//EX05
	printf("\n");
	printf("EX05\n");
	ft_putstr("raquel\n");


	//EX06
	printf("\n");
	printf("EX06\n");
	int n60;
	char *tab = "PRUEBA";
	n60 = ft_strlen(tab);
	printf("hola %s\n", tab);

	//EX07
	printf("\n");
	printf("EX07\n");
	int taba[4] = {1,2,3,4};
	int n70;
	int n71;

	n70 = 0;
	while (n70 < 4)
	{
		printf("%d", taba[n70]);
		n70++;
	}
	printf("\n");
	ft_rev_int_tab(&taba[0], 4);

	n71 = 0;
	while (n71 < 4)
	{
		printf("%d", taba[n71]);
		n71++;
	}

	//EX08
	printf("\n");
	printf("\n");
	printf("EX08\n");

	int tabb[10] = {4,2,1,7,3,8,6};
	int n80;
	ft_sort_int_tab(&tabb[0], n80);
	printf("%d\n", tabb[n80]);
	return 0;
}
