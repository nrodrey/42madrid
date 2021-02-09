/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcuesta- <rcuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 18:44:00 by esta-             #+#    #+#             */
/*   Updated: 2020/02/25 10:25:04 by rcuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "./ex00/ft_strcmp.c"
#include "./ex01/ft_strncmp.c"
#include "./ex02/ft_strcat.c"
#include "./ex03/ft_strncat.c"
#include "./ex04/ft_strstr.c"
#include "./ex05/ft_strlcat.c"

int main(void)
{
	//EX00
	printf("\n");
	printf("EX00\n");

	char a00[] = "abcdef";
	char b00[] = "abcdef";

	printf("%d\n", ft_strcmp(a00, b00));
	printf("%d\n", strcmp(a00, b00));


	//EX01
	printf("\n");
	printf("EX01\n");

	// cambiar primera letra de b10
	char a10[20] = "raquel";
	char b10[6] = "raquel";

	printf("%d\n", ft_strncmp(a10, b10, 5));
	printf("%d\n", strncmp(a10, b10, 5));


	//EX02
	printf("\n");
	printf("EX02\n");

	char a20[20] = "raquel";
	char b20[6] = "hola";
	// char *c20;
	char *d20;

	d20 = ft_strcat(a20, b20);
//	c20 = strcat(a20, b20);
//	printf("%s\n", c20);
	printf("%s\n", d20);


	//EX03
	printf("\n");
	printf("EX03\n");

	char a30[20] = "raquel";
	char b30[6] = "hola";
	char *c30;

	c30 = strncat(a30, b30, 3);
	printf("%s\n", c30);


	//EX04
	printf("\n");
	printf("EX04\n");

	char a40[13] = "madrid ftyuj";
	char b40[20] = "ftyuj";

	printf("%s\n", a40);
//	printf("%s\n", b40);
	printf("%s\n", ft_strstr(a40, b40));

	
	//EX05
	printf("\n");
	printf("EX05\n");

	char a50[20] = "raquel";
	char b50[12] = "holajhtg";

	printf("%d\n", ft_strlcat(a50, b50, 15));

	return (0);
}
