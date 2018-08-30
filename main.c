/*
** main.c for main in /home/Neferett/bin/IMPORT
**
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
**
** Started on  Mon Nov 14 14:04:13 2016 Bonaldi Jordan
** Last update Sun Dec 11 19:17:46 2016 root
*/

#include "wireframe.h"

void	display_window(sfRenderWindow *wd, sfSprite *sprite,
		       char *str, sfTexture *texture)
{
  sfEvent	event;
  t_framebuffer	*fb;

  fb = my_framebuffer_create(str);
  drawer_base(fb);
  drawer_3d(fb, fb->tab);
  sfTexture_updateFromPixels(texture, fb->pixels, W, H, 0, 0);
  while (sfRenderWindow_isOpen(wd))
    {
      while (sfRenderWindow_pollEvent(wd, &event))
	if (event.type == sfEvtClosed ||
	    (event.type == sfEvtKeyPressed && event.key.code == sfKeyEscape))
	  sfRenderWindow_close(wd);
      sfRenderWindow_clear(wd, sfBlack);
      sfRenderWindow_drawSprite(wd, sprite, NULL);
      sfRenderWindow_display(wd);
    }
  my_free_buffer(fb);
  sfRenderWindow_destroy(wd);
}

void	init_window(char *str)
{
  sfVideoMode		mode;
  sfRenderWindow        *wd;
  sfTexture             *texture;
  sfSprite              *sprite;

  if (!(sprite = sfSprite_create()) ||
      !(texture = sfTexture_create(W, H)))
    exit(84);
  sfSprite_setTexture(sprite, texture, sfTrue);
  mode = set_mode(W, H, 32);
  if (!(wd = sfRenderWindow_create(mode, "WireFrame",
				  sfResize | sfClose, NULL)))
    exit(84);
  display_window(wd, sprite, str, texture);
}

int			main(int argc, char **argv)
{
  if (argc != 2)
    return (84);
  if (!(argv[1][my_strlen(argv[1]) - 3] == '.') ||
      !(argv[1][my_strlen(argv[1]) - 2] == 'w') ||
      !(argv[1][my_strlen(argv[1]) - 1] == 'f'))
    return(84);
  init_window(argv[1]);
  return (0);
}
