/*
** my_swap.c for  in /home/hugues/DEVC/Jour03/roux_a/my_swap
** 
** Made by ROUX Hugues
** Login   <roux_a@etna-alternance.net>
** 
** Started on  Thu Oct 20 11:39:52 2016 ROUX Hugues
** Last update Thu Oct 20 11:41:33 2016 ROUX Hugues
*/

void	my_swap(int *a, int *b)
{
  int	swap;

  swap = *a;
  *a = *b;
  *b = swap;
}
