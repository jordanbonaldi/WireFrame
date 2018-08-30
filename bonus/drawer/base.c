/*
** base.c for base in /home/Neferett/wireframe
** 
** Made by root
** Login   <root@epitech.net>
** 
** Started on  Tue Dec  6 15:59:22 2016 root
** Last update Sun Dec 11 17:28:29 2016 Bonaldi Jordan
*/

#include "wireframe.h"

void	drawer_base(t_framebuffer *fb)
{
  int	i;
  int	r;
  int	d;
  int	x;
  int	y;

  r = fb->r;

  x = (fb->x * r);
  y = (fb->y * r);
  d = fb->d;
  i = 0 - r;
  while ((i += r) <= y)
    my_draw_line(fb,
		 my_parallel_projection(set_vector3d(x - d,
						     i + d + 300, 0.0), 45),
		 my_parallel_projection(set_vector3d(0 - d,
						     i + d + 300, 0.0), 45), sfWhite);
  i = 0 - r;
  while ((i += r) <= x)
    my_draw_line(fb,
		 my_parallel_projection(set_vector3d(i - d, 300 + d, 0.0), 45),
		 my_parallel_projection(set_vector3d(i - d,
						     300 + d + y, 0.0), 45), sfYellow);
}
