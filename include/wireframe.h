/*
** wireframe.h for wireframe_header in /home/Neferett/wireframe
**
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
**
** Started on  Mon Nov 14 14:14:37 2016 Bonaldi Jordan
** Last update Sun Dec 11 18:59:52 2016 root
*/

#ifndef H_WIRE
#define H_WIRE

#define	W 1920
#define H 1080

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <SFML/Graphics.h>
#include <math.h>

#include "lib.h"

typedef struct          s_my_framebuffer
{
  sfUint8*      pixels;
  int           width;
  int           height;
  char		**tab;
  int		a;
  int		d;
  int		r;
  int		x;
  int		y;
}			t_framebuffer;

sfVector2f      set_vector(float, float);
sfVector2i      set_vectori(float, float);
sfVector3f	set_vector3d(float, float, float);
sfColor         get_color(int);
sfVideoMode     set_mode(int, int, int);

void    my_put_pixel(t_framebuffer *, int, int, sfColor);
void    my_draw_line(t_framebuffer *, sfVector2i, sfVector2i, sfColor);
void	drawer_3d(t_framebuffer *, char **);
sfVector2i      my_parallel_projection(sfVector3f, float);
t_framebuffer        *my_framebuffer_create(char *);
void			drawer_base(t_framebuffer *);
void		my_free_buffer(t_framebuffer *fb);

#endif
