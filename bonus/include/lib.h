/*
** my.h for my.h in /home/Neferett/CPool_Day07/include
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Tue Oct 11 14:13:54 2016 Bonaldi Jordan
** Last update Wed Dec  7 15:43:33 2016 root
*/

#ifndef	H_LIB
#define H_LIB

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	my_putchar(char c);
void	my_sort_int_tab(int *tab, int size);
int	my_isneg(int nb);
int	my_put_nbr(int nb);
int	my_swap(int *a, int *b);
int	my_putstr(char *str);
int	my_strlen(char *str);
int	nb(char *str);
char	**my_str_to_wordtab(char *);
int	my_getnbr_base(char *str, char *base);
int	my_putnbr_base(int nbr, char *base);
int	my_power_rec(int nb, int power);
int	my_square_root(int nb);
int	my_is_prime(int nb);
int	my_find_prime_sup(int nb);
int	my_strcmp(char *s1, char *s2);
int	my_strncmp(char *s1, char *s2);
int	my_str_isalpha(char *str);
int	my_str_isnum(char *str);
int	my_str_islower(char *str);
int	my_str_isupper(char *str);
int	my_str_isprintable(char *str);
int	my_showstr(char *str);
int	my_showmem(char *str, int size);
char	*my_strcpy(char *dest, char *src);
char	*my_strncpy(char *dest, char *src, int n);
char	*my_revstr(char *str);
char	*my_strstr(char *str, char *to_find);
char	*my_strupcase(char *str);
char	*my_strlowcase(char *str);
char	*my_strcapitalize(char *str);
char	*my_strcat(char *dest, char *src);
char	*my_strncat(char *dest, char *src, int nb);
char	*sum_params(int args, char **arg);
int	nb_of(char *, char);
char	*my_strdup(char *str);

#endif
