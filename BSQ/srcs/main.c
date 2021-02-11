/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcuesta- <rcuesta-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 13:15:12 by rcuesta-          #+#    #+#             */
/*   Updated: 2020/02/25 22:13:26 by rcuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

//void	checkanchoylargo(t_mapita mapita)
//{
//	int i;
//}

void	get_data(char *map)
{
	int			x;
	int			y;
	int			tempy;
	char		signos[3];
	t_mapita	mapita;

	mapita.map = map;
	x = ft_horizontal(map);
	if (x < 1)
		ft_map_error();
	y = ft_atoi(map);
	tempy = ft_vertical(map);
	printf("\nY = %d TEMP Y = %d\n",y, tempy);
	if(tempy != y)
		ft_map_error();
	if (y < 1)
		ft_map_error();
	ft_chars(map, signos);
	printf("empty:%c\n", signos[0]);
	printf("obs:%c\n", signos[1]);
	printf("fill:%c\n", signos[2]);
	mapita.x = x;
	mapita.y = y;
	if(signos[0] == signos[1] || signos[0] == signos[2] || signos[1] == signos[2])
		ft_map_error();
	if(signos[0] == '\0' || signos[1] == '\0' || signos[2] == '\0')
		ft_map_error();
	mapita.empty = signos[0];
	mapita.obs = signos[1];
	mapita.fill = signos[2];
	ft_newmapita(mapita);
}

int		main(int argc, char **argv)
{
	char 	*filename;
	char 	*map;
	int		argumentos;
	
	argumentos = argc;
	if (argc <= 1)
	{
		ft_error();
		map = NULL;
	}
	else
	{
		argc = 1;
		while(argc <= argumentos - 1)
		{
			filename = argv[argc];
			map = get_dict(filename);
			get_data(map);
			argc++;
			if(argc < argumentos)
				ft_putchar('\n');
		}
	}
	free(map);
}
