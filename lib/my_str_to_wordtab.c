/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/Neferett/CPool_Day08/task04
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Wed Oct 12 10:53:16 2016 Bonaldi Jordan
** Last update Sun Dec 11 16:16:26 2016 root
*/

#include "lib.h"

char	**tab_complete(char **, char *, int, int *);

char	**my_str_to_wordtab(char *str)
{
  char	**tab;
  int	j;
  int	i;

  j = -1;
  i = 0;
  if (!*str)
    exit(84);
  tab = malloc(my_strlen(str));
  tab = tab_complete(tab, str, i, &j);
  tab[++j] = NULL;
  return (tab);
}

char	**tab_complete(char **tab, char *str, int i, int *j)
{
  char	*arr;

  arr = malloc(my_strlen(str) + 1);
  while (*str && !(i = 0) && (!(*j)++ ? 1 : 1))
    {
      while (*str == '\n' && (str++)) {}
      while (*str != '\n' && *str)
	if ((arr[i] = *str) && (str++) && ++i) {}
      if (arr && !(arr[i] = 0) && (tab[*j] = my_strdup(arr)))
	while (*++arr);
    }
  return (tab);
}
