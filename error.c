/*
** error.c for  in /home/hugues/DEVC/CHIFUMI/roux_a/CHIFUMI
** 
** Made by ROUX Hugues
** Login   <roux_a@etna-alternance.net>
** 
** Started on  Thu Oct 27 20:36:59 2016 ROUX Hugues
** Last update Fri Oct 28 17:39:00 2016 ROUX Hugues
*/

#include "my_head.h"

char		**init_error()
{
  static char	*tab_error[7];

  tab_error[0] = "Erreur\n";
  tab_error[1] = "Erreur : --duree int>0 impair, --version expert/classique\n";
  tab_error[2] = "Erreur argument --version : expert/classique seulement\n";
  tab_error[3] = "Erreur argument --duree : int>0 impair seulement\n";
  tab_error[4] = "Veuillez saisir oui ou non \n";
  tab_error[5] = "Veuillez jouer un coup valide \n";
  tab_error[6] = "Erreur malloc\n";
  return (tab_error);
}

void	print_error(int code)
{
  char	**tab_error;

  tab_error = init_error();
  my_putstr(tab_error[code]);
}
