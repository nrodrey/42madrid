/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   leer_fichero.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcuesta- <rcuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 09:21:15 by rcuesta-          #+#    #+#             */
/*   Updated: 2020/02/23 09:51:36 by rcuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEER_FICHERO_H
# define LEER_FICHERO_H

# include <unistd.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>

typedef	struct	s_tabla
{
	char		ent[1024];
	char		sal[1024];
}				t_tabla;

void			lines_counter(char (*alm)[1024], char *arch, int *c, int *j);
void			cut_lines(char (*alm)[1024], t_tabla **current, int *j, int *k);
void			ft_copy(char *dict, int i, int j);
void			args_test(int argc, char **argv, char **dict);
int				file_counter(int argc, char *argv[]);

#endif
