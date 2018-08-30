/*
** my_put_char.c for my_put_char in /home/Neferett/CLIB
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Wed Oct  5 18:01:01 2016 Bonaldi Jordan
** Last update Sun Nov 13 21:11:58 2016 Bonaldi Jordan
*/

#include "lib.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}
