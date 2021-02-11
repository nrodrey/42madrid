/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_tab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcuesta- <rcuesta-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 14:24:24 by rcuesta-          #+#    #+#             */
/*   Updated: 2020/02/25 21:33:16 by rcuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

int		cogerint(int uno, int dos, int tres)
{
	int menorint;

	menorint = 0;
	if (uno < dos)
		if (uno < tres)
			menorint = uno;
		else
			menorint = tres;
	else if (dos > tres)
		menorint = tres;
	else
		menorint = dos;
	return (menorint + 1);
}

char	*get_dict(char *path)
{
	char	*c;
	int		fg;
	int		i;

	i = 0;
	c = malloc(1);
	if(c == NULL)
		ft_map_error();
	fg = open(path, O_RDONLY);
	if (fg == -1)
		ft_map_error();
	while (read(fg, c, 1))
		i++;
	close(fg);
	if (fg == -1)
		ft_map_error();
	free(c);
	c = malloc(i + 1);
	if(c == NULL)
		ft_map_error();
	fg = open(path, O_RDONLY);
	if (fg == -1)
		ft_map_error();
	read(fg, c, i);
	close(fg);
	if (fg == -1)
		ft_map_error();
	return (c);
}

void	convertmap(t_mapita mapita, int tabl[mapita.x][mapita.y])
{
	int auxx;
	int auxy;

	auxy = 0;
	while (auxy < mapita.y)
	{
		auxx = 0;
		while (auxx < mapita.x)
		{
			if (tabl[auxx][auxy] == 0)
				ft_putchar(mapita.obs);
			else if (auxx <= mapita.maxnumx && auxy <= mapita.maxnumy
			&& auxx > (mapita.maxnumx - mapita.numerogrande)
			&& auxy > (mapita.maxnumy - mapita.numerogrande))
				ft_putchar(mapita.fill);
			else
				ft_putchar(mapita.empty);
			auxx++;
		}
		ft_putchar('\n');
		auxy++;
	}
}

void	ft_newtab(t_mapita mapita, int tabl[mapita.x][mapita.y])
{
	int posicionx;
	int posiciony;
	int auxx;
	int auxy;
	int maxnum;

	posicionx = 0;
	posiciony = 0;
	maxnum = 0;
	auxy = 0;
	while (auxy < mapita.y)
	{
		auxx = 0;
		while (auxx < mapita.x)
		{
			if (tabl[auxx][auxy] > maxnum)
			{
				maxnum = tabl[auxx][auxy];
				posicionx = auxx;
				posiciony = auxy;
			}
			auxx++;
		}
		auxy++;
	}
	mapita.numerogrande = maxnum;
	mapita.maxnumx = posicionx;
	mapita.maxnumy = posiciony;
	convertmap(mapita, tabl);
}

void	ft_newmapita(t_mapita mapita)
{
	int tabl[mapita.x][mapita.y];
	int w;
	int auxx;
	int auxy;

	w = 0;
	while (mapita.map[w] != '\n')
		w++;
	auxy = 0;
	w++;
	while (mapita.map[w] != '\0')
	{
		auxx = 0;
		while (mapita.map[w] != '\n')
		{
			if (mapita.map[w] == mapita.empty)
				tabl[auxx][auxy] = 1;
			else if (mapita.map[w] == mapita.obs)
				tabl[auxx][auxy] = 0;
			else
				ft_map_error();
			w++;
			auxx++;
		}
		w++;
		auxy++;
	}
	auxy = 0;
	while (auxy < mapita.y)
	{
		auxx = 0;
		while (auxx < mapita.x)
		{
			if (tabl[auxx][auxy] >= 1 && (tabl[auxx][auxy] >= 1
			&& tabl[auxx][auxy - 1] >= 1 && tabl[auxx - 1][auxy] >= 1
			&& tabl[auxx - 1][auxy - 1] >= 1) && auxy != 0 && auxx != 0)
				tabl[auxx][auxy] = cogerint(tabl[auxx - 1][auxy],
				tabl[auxx][auxy - 1], tabl[auxx - 1][auxy - 1]);
			auxx++;
		}
		auxy++;
	}
	ft_newtab(mapita, tabl);
}
