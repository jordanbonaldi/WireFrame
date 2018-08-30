/*
** base.c for base in /home/Neferett/wireframe
** 
** Made by root
** Login   <root@epitech.net>
** 
** Started on  Tue Dec  6 15:59:22 2016 root
** Last update Sun Dec 11 19:03:11 2016 root
*/

#include "wireframe.h"

void	print_3dp1(t_framebuffer *fb, char **tab)
{
  int	i;
  int	j;
  int	k;
  int	l;
  int	r;
  int	d;

  r = fb->r;
  l = -r;
  d = fb->d;
  i = -1;
  while ((k = -r) && (j = -2) && (!(l += r) ? 1 : 1) && ++i < fb->y + 1)
    while (tab[i][(j += 2)] && (!(k += r) ? 1 : 1))
      if (nb(&tab[i][j]) > 0)
	my_draw_line(fb,
		     my_parallel_projection(set_vector3d(-d + k, d + 300 + l,
							 nb(&tab[i][j]) * fb->a), 45),
		     my_parallel_projection(set_vector3d(-d + k, d + 300 + l, 0.0),
					    45), sfWhite);
}

void	print_3dp2(t_framebuffer *fb, char **tab)
{
  int	i;
  int	j;
  int	k;
  int	l;
  int	r;
  int	d;

  r = fb->r;
  l = -r;
  d = fb->d;
  i = -1;
  while ((k = -r) && (j = -2) && (!(l += r) ? 1 : 1) && ++i < fb->y + 1)
    while (tab[i][(j += 2)] && (!(k += r) ? 1 : 1))
      if (nb(&tab[i][j]) > 0 && tab[i + 1])
	my_draw_line(fb,
		     my_parallel_projection(set_vector3d(-d + k, d + 300 + l + r,
							 nb(&tab[i + 1][j]) * fb->a), 45),
		     my_parallel_projection(set_vector3d(-d + k, d + 300 + l,
							 nb(&tab[i][j]) * fb->a),
					    45), get_color(nb(&tab[i][j])));
}

void	print_3dp3(t_framebuffer *fb, char **tab)
{
  int	i;
  int	j;
  int	k;
  int	l;
  int	r;
  int	d;

  r = fb->r;
  l = -r;
  d = fb->d;
  i = -1;
  while ((k = -r) && (j = -2) && (!(l += r) ? 1 : 1) && ++i < fb->y + 1)
    while (tab[i][(j += 2)] && (!(k += r) ? 1 : 1))
      if (nb(&tab[i][j]) > 0 && tab[i][j + 2])
	my_draw_line(fb,
		     my_parallel_projection(set_vector3d(-d + k + r, d + 300 + l,
							 nb(&tab[i][j + 2]) * fb->a), 45),
		     my_parallel_projection(set_vector3d(-d + k, d + 300 + l,
							 nb(&tab[i][j]) * fb->a),
					    45), get_color(nb(&tab[i][j])));
}

void	drawer_3d(t_framebuffer *fb, char **tab)
{
  print_3dp1(fb, tab);
  print_3dp2(fb, tab);
  print_3dp3(fb, tab);
}
