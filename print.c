/*
** print.c for  in /home/hugues/DEVC/CHIFUMI/roux_a/CHIFUMI
** 
** Made by ROUX Hugues
** Login   <roux_a@etna-alternance.net>
** 
** Started on  Fri Oct 28 11:09:47 2016 ROUX Hugues
** Last update Sat Oct 29 09:47:48 2016 ROUX Hugues
*/

#include "my_head.h"
#include <stdlib.h>

void	print_score(int score1, int score2)
{
  my_putstr("Joueur : ");
  my_put_nbr(score1);
  my_putstr("\nOrdinateur : ");
  my_put_nbr(score2);
  my_putstr("\n");
}

void	print_menu(char *version, int duration)
{
  my_putstr("\033[H\033[J");
  my_putstr("\033[34;01m==================================\n");
  my_putstr("==============CHIFUMI=============\n");
  my_putstr("==================================\n");
  my_putstr("Pour quitter taper 'quit' \n");
  my_putstr("Version : ");
  my_putstr(version);
  my_putstr(" (pour changer --version expert/classique)\nBest of ");
  my_put_nbr(duration);
  my_putstr(" (pour changer --duree int)\033[00m\n");
}

void	print_winner(int score1, int score2)
{
  if (score1 > score2)
    my_putstr("\033[32;01mVous avez gagné ! Bien joué !\033[00m\n");
  else if (score1 < score2)
    my_putstr("\033[31;01mVous avez perdu ! Dommage !\033[00m\n");
  else
    my_putstr("Match nul ! \n");
}

void	print_hand(t_list *l1, t_list *l2)
{
  int	i;

  i = 1;
  my_putstr("\nHistorique des coups : ");
  while (l1 != NULL)
    {
      my_putstr("\nManche ");
      my_put_nbr(i);
      my_putstr(" : ");
      my_putstr(l1->data);
      my_putstr(" vs ");
      my_putstr(l2->data);;
      i = i + 1;
      l1 = l1->next;
      l2 = l2->next;
    }
}
