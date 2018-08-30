/*
** my_parallel_projection.c for my_parallel_projection in /home/Neferett/wireframe/src
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Mon Nov 14 15:32:38 2016 Bonaldi Jordan
** Last update Fri Dec  9 14:52:19 2016 Bonaldi Jordan
*/

#include "wireframe.h"

sfVector2i	my_parallel_projection(sfVector3f pos3d, float angle)
{
  sfVector2i	vectori;
  sfVector2f	vector;

  vector.x = -((cos(angle / (180 / M_PI))) * (pos3d.y)) + pos3d.x;
  vector.y = ((cos(angle / (180 / M_PI))) * (pos3d.y)) - pos3d.z;
  if ((vectori.x = ceil(vector.x)) ^ (vectori.y = ceil(vector.y))) {}
  return (vectori);
}
