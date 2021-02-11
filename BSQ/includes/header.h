/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcuesta- <rcuesta-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 13:15:49 by rcuesta-          #+#    #+#             */
/*   Updated: 2020/02/25 22:02:04 by rcuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef	struct	s_mapita
{
   char			*map;
   char			empty;
   char			obs;
   char			fill;
   int			x;
   int			y;
   int			numerogrande;
   int			maxnumx;
   int			maxnumy;
}				t_mapita;

void			ft_putchar(char c);
void			ft_error(void);
void			ft_map_error(void);
char			*get_dict(char *path);
int				ft_atoi(char *str);
int				ft_horizontal(char *str);
int				ft_vertical(char *str);
void			ft_print_tab(int x, int y, char signos[3]);
void			ft_checksigns(char *str);
void			ft_newtab(t_mapita mapita, int tabl[mapita.x][mapita.y]);
void			ft_newmapita(t_mapita mapita);
void			ft_chars(char *str, char *signs);


#endif
