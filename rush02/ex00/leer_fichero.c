/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   leer_fichero.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcuesta- <rcuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 09:21:15 by rcuesta-          #+#    #+#             */
/*   Updated: 2020/02/23 21:44:16 by rcuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "leer_fichero.h"

int		g_id;
int		g_c;
int		g_k;
int		g_l;

void		lines_counter(char (*alm)[1024], char *arch, int *c, int *j)
{
	while (arch[*c])
	{
		if (arch[*c] == '\n')
		{
			alm[*j][*c] = '\0';
			*j += 1;
			*c = 0;
		}
		alm[*j][*c] = arch[*c];
		*c += 1;
	}
}

void		cut_lines(char (*alm)[1024], t_tabla **current, int *j, int *k)
{
	while (*j < 42)
	{
		while (alm[*j][*k] != ':')
		{
			(*current)->ent[*k] = alm[*j][*k];
			*k += 1;
		}
		(*current)->ent[*k] = '\0';
		while (alm[*j][*k] != '\0')
		{
			*k += 1;
			(*current)->sal[*k] = alm[*j][*k];
		}
		(*current)->sal[*k] = '\0';
		*k = 0;
		*j += 1;
		*current += 1;
	}
}

void		ft_copy(char *dict, int i, int j)
{
	char	arch[i];
	char	alm[j][1024];
	t_tabla	*current;
	t_tabla	*datos;

	datos = (t_tabla*)malloc(sizeof(t_tabla*) * j);
	current = datos;
	g_id = open(dict, O_RDONLY);
	read(g_id, arch, i);
	arch[i + 1] = '\0';
	close(g_id);
	g_c = 0;
	j = 0;
	g_k = 0;
	lines_counter(alm, arch, &g_c, &j);
	j = 0;
	g_k = 0;
	g_l = 0;
	current->ent[0] = 97;
	current->ent[1] = 98;
	cut_lines(alm, &current, &j, &g_k);
}

void		args_test(int argc, char **argv, char **dict)
{
	if (argc == 2)
	{
		*dict = "numbers.dict";
	}
	if (argc == 3)
	{
		*dict = argv[1];
	}
}
