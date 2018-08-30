/*
** my_put_pixel.c for my_put_pixel.c in /home/Neferett/wireframe/src
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Mon Nov 14 14:16:11 2016 Bonaldi Jordan
** Last update Sun Dec 11 14:38:47 2016 root
*/

#include "wireframe.h"

void    my_put_pixel(t_framebuffer* fb, int x, int y, sfColor color)
{
  if (x >= 0 && y >= 0 && x < fb->width && y < fb->height)
    {
      fb->pixels[((fb->width * y) + x) * 4] = color.r;
      fb->pixels[((fb->width * y) + x) * 4 + 1] = color.g;
      fb->pixels[((fb->width * y) + x) * 4 + 2] = color.b;
      fb->pixels[((fb->width * y) + x) * 4 + 3] = color.a;
    }
}
