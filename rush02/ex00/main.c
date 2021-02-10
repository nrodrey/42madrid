/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcuesta- <rcuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 09:21:15 by rcuesta-          #+#    #+#             */
/*   Updated: 2020/02/23 21:43:32 by rcuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "leer_fichero.h"

int			main(int argc, char *argv[])
{
	int		i;
	int		j;
	int		id;
	char	c;
	char	*dict;

	i = 0;
	j = 0;
	args_test(argc, argv, &dict);
	id = open(dict, O_RDONLY);
	if (id == -1)
	{
		write(1, "Error\n", 13);
		return (1);
	}
	while (read(id, &c, 1) != 0)
	{
		i++;
		write(1, &c, 1);
		if (c == '\n')
			j++;
	}
	close(id);
	ft_copy(dict, i, j);
	return (0);
}
