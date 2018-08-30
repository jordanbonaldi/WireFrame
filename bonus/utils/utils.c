/*
** utils.c for util in /home/Neferett/wireframe/utils
**
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
**
** Started on  Mon Nov 14 14:30:28 2016 Bonaldi Jordan
** Last update Sun Dec 11 19:02:12 2016 root
*/

#include "wireframe.h"

t_framebuffer		*my_framebuffer_create(char *str, int j, int k)
{
  ssize_t		a;
  int			i;
  int			fd;
  char			*buffer;
  t_framebuffer		*fb;

  if (!(fb = malloc(sizeof(*fb))) || !(buffer = malloc(4096)) ||
      (fd = open(str, O_RDONLY)) < 0 || (a = read(fd, buffer, 4096)) < 0)
    exit(EXIT_FAILURE);
  buffer[a] = 0;
  fb->tab = my_str_to_wordtab(buffer);
  fb->height = H;
  fb->width = W;
  fb->x = (nb_of(buffer, ',') + 1) / nb_of(buffer, '\n') - 1;
  fb->y = nb_of(buffer, '\n') - 1;
  fb->r = 50 + j;
  fb->a = 20 + j;
  fb->d = 500 - k * 10;
  if (!(fb->pixels = malloc(W * H * 4 * sizeof(*fb))))
    exit(EXIT_FAILURE);
  i = -1;
  while (++i < W * H * 4)
    fb->pixels[i] = 0;
  free(buffer);
  return (fb);
}

void		my_free_buffer(t_framebuffer *fb)
{
  int		i;

  i = -1;
  free(fb->pixels);
  while (fb->tab[++i])
    free(fb->tab[i]);
}

sfVector3f      set_vector3d(float x, float y, float z)
{
  sfVector3f    vector;

  vector.x = x;
  vector.y = y;
  vector.z = z;
  return (vector);
}

sfColor         get_color(int a)
{
  return (!a || a == 1 ? sfWhite : a == 2 || a == 3 ? sfGreen :
	  a == 4 || a == 5 ? sfYellow : a == 6 || a == 7 ? sfMagenta :
	  a == 8 ? sfRed : sfBlue);
}

sfVideoMode	set_mode(int w, int h, int bpp)
{
  sfVideoMode	mode;

  mode.width = w;
  mode.height = h;
  mode.bitsPerPixel = bpp;
  return (mode);
}
