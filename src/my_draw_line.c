/*
** my_draw_line.c for my_draw_line in /home/Neferett/wireframe/src
**
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
**
** Started on  Fri Dec  9 16:20:34 2016 Bonaldi Jordan
** Last update Sun Dec 11 18:37:52 2016 root
*/

# include "wireframe.h"

# define ABS(x)	((x < 0) ? -x : x)

void    my_put_pixel(t_framebuffer *fb, int x, int y, sfColor c);

void		my_draw_line(t_framebuffer* f, sfVector2i from,
			     sfVector2i to, sfColor col)
{
  sfVector2f    c;
  int		i;
  float		size;

  i = 0;
  c.y = (float)from.y;
  c.x = (float)from.x;
  if (ABS(to.x - from.x) > ABS(to.y - from.y))
    size = ABS(to.x - from.x);
  else
    size = ABS(to.y - from.y);
  while (i < size)
    {
      my_put_pixel(f, (int)c.x, (int)c.y, col);
      c.x = c.x + (((float)to.x - (float)from.x) / size);
      c.y = c.y + (((float)to.y - (float)from.y) / size);
      i++;
    }
}
