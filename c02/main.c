/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcuesta- <rcuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 17/02/2020 12:32 by rcuesta-             #+#    #+#             */
/*   Updated: 17/02/2020 12:32 by rcuesta-              ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "./ex00/ft_strcpy.c"
#include "./ex01/ft_strncpy.c"
#include "./ex02/ft_str_is_alpha.c"
#include "./ex03/ft_str_is_numeric.c"
#include "./ex04/ft_str_is_lowercase.c"
#include "./ex05/ft_str_is_uppercase.c"
#include "./ex06/ft_str_is_printable.c"
#include "./ex07/ft_strupcase.c"
#include "./ex08/ft_strlowcase.c"
#include "./ex09/ft_strcapitalize.c"
#include "./ex10/ft_strlcpy.c"
#include "./ex11/ft_putstr_non_printable.c"
//#include "./ex12/ft_print_memory.h"


int main(void)
{
//	//EX00
//	printf("EX00\n");
////	printf("Reproducir de manera idéntica el funcionamiento de la función strcpy\n");
//	printf("\n");
//
//	char name0[20] = "Raquel Cuesta";
//	char copy0[20] = "Madrid";
//
//	*ft_strcpy(name0, copy0);
//	printf("%s\n", copy0);
//	printf("%s\n", name0);


	//EX01
	printf("\n");
	printf("EX01\n");
	//	printf("Reproducir de manera idéntica el funcionamiento de la función strncpy\n");
	printf("\n");

	char name1[20] = "Raquel Cuesta";
	char copy1[20] = "Madrid";
	char *j;

	j = ft_strncpy(name1, copy1, 3);
	printf("%s\n", name1);
	printf("%s\n", copy1);


	//EX02
	printf("\n");
	printf("EX02\n");
//	printf("Escriba una función que devuelva 1 si la cadena pasada como parámetro contiene únicamente caracteres alfabéticos y devuelva 0 si la cadena contiene otro tipo de caracteres\n");

	char name2[] = "1RAqu31 Cu35t@";
	char copy2[] = "madrid";
	int x2;
	int y2;

	x2 = ft_str_is_alpha(name2);
	y2 = ft_str_is_alpha(copy2);
	printf("%d\n", x2);
	printf("%d\n", y2);


	//EX03
	printf("\n");
	printf("EX03\n");
	// Escriba una función que devuelva 1 si la cadena pasada como parámetro contiene únicamente dígitos y devuelva 0 si la cadena contiene otro tipo de caracteres.

	char name3[] = "Raquel13Cuesta";
	char copy3[] = "Madrid";
	char number3[] = "930227";
	int x3;
	int y3;
	int z3;

	x3 = ft_str_is_numeric(name3);
	printf("%d\n", x3);

	y3 = ft_str_is_numeric(copy3);
	printf("%d\n", y3);

	z3 = ft_str_is_numeric(number3);
	printf("%d\n", z3);


	//EX04
	printf("\n");
	printf("EX04\n");
	//Escriba una función que devuelva 1 si la cadena pasada como parámetro contiene únicamente caracteres alfabéticos en minúsculas y devuelva 0 si la cadena contiene otro tipo de caracteres.

	char name4[20] = "Raquel";
	char copy4[20] = "raquel";
	char vacio4[] = "";
	int x4;
	int y4;
	int z4;

	x4 = ft_str_is_lowercase(name4);
	y4 = ft_str_is_lowercase(copy4);
	z4 = ft_str_is_lowercase(vacio4);
	printf("%d\n", x4);
	printf("%d\n", y4);
	printf("%d\n", z4);


	//EX05
	printf("\n");
	printf("EX05\n");
	// Escriba una función que devuelva 1 si la cadena pasada como parámetro contiene únicamente caracteres alfabéticos en mayúsculas y devuelva 0 si la cadena contiene otro tipo de caracteres.


	char name5[20] = "raquEL";
	char copy5[20] = "RAQUEL";
	char vacio5[] = "";
	int x5;
	int y5;
	int z5;

	x5 = ft_str_is_uppercase(name5);
	y5 = ft_str_is_uppercase(copy5);
	z5 = ft_str_is_uppercase(vacio5);
	printf("%d\n", x5);
	printf("%d\n", y5);
	printf("%d\n", z5);


	//EX06
	printf("\n");
	printf("EX06\n");
	// Escriba una función que devuelva 1 si la cadena pasada como parámetro contiene únicamente caracteres imprimibles y devuelva 0 si la cadena contiene otro tipo de caracteres.

	char name6[20] = "Raquel";
	char copy6[20] = "·3";
	int x6;
	int y6;

	x6 = ft_str_is_printable(name6);
	y6 = ft_str_is_printable(copy6);
	printf("%d\n", x6);
	printf("%d\n", y6);


	//EX07
	printf("\n");
	printf("EX07\n");
	// Escriba una función que ponga cada letra en mayúscula.

	char name7[20] = "raqeL";
	char *x7 = &name7[0];

	ft_strupcase(name7);
	printf("%s\n", x7);


	//EX08
	printf("\n");
	printf("EX08\n");
	// Escriba una función que ponga cada letra en minúscula.

//	char *name8 = "RaQeL";
//	ft_strlowcase(name8);
//	printf("%s\n", name8);

	char name8[20] = "raqeL";
//	char *x8 = &name8[0];

	ft_strupcase(name7);
	printf("%s\n", name8);


	//EX09
	printf("\n");
	printf("EX09\n");
	// Escriba una función que ponga en mayúscula la primera letra de cada palabra y el resto de la palabra en minúsculas. 

	char name9[80] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(name9);
	printf("%s\n", name9);


	//EX10
	printf("\n");
	printf("EX10\n");

	char name10[20] = "raquel";
	char copy10[20] = "cuesta";

	ft_strlcpy(name10, copy10, 6);
	printf("%s\n", name10);


	//EX11
	printf("\n");
	printf("EX11\n");

	char name11[20] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(name11);
	printf("%s\n", name11);


	//EX12
	printf("\n");
	printf("EX12\n");

//	char name12[20] = "";
//	char copy12[20] = "";
//	int x12;
//
//	ft_strcpy();
//	printf("%d\n");


	return (0);
}
