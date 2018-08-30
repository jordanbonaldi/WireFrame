/*
** my_strcpy.c for my_strcpy in /home/Neferett/CPool_Day06
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Mon Oct 10 08:44:26 2016 Bonaldi Jordan
** Last update Sun Dec 11 16:07:53 2016 root
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i])
    {
      dest[i] = src[i];
      i += 1;
    }
  dest[i] = '\0';
  return (dest);
}
