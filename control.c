/*
** control_arg.c for  in /home/hugues/DEVC/CHIFUMI/roux_a/CHIFUMI
** 
** Made by ROUX Hugues
** Login   <roux_a@etna-alternance.net>
** 
** Started on  Thu Oct 27 18:20:28 2016 ROUX Hugues
** Last update Sat Oct 29 09:26:15 2016 ROUX Hugues
*/

#include "my_head.h"
#include <stdlib.h>

int	control_arg(int argc, char **argv, int *duration, char **version)
{
  int	i;

  i = 1;
  if ((argc % 2) != 1)
    return (1);
  while (i < argc)
    {
      if (my_strcmp("--version", argv[i]) == 0)
	{
	  i = i + 1;
	  *version = argv[i];
	  if (((my_strcmp("classique", *version) != 0) &&
	      (my_strcmp("expert", *version)) != 0))
	    return (2);
	}
      else if (my_strcmp("--duree", argv[i]) == 0)
	{
	  i = i + 1;
	  *duration = my_getnbr(argv[i]);
	  if (((*duration) % 2) == 0 || (*duration) < 0)
	    return (3);
	}
      i = i + 1;
    }
  return (0);
}

char		**init_possibilities()
{
  static char	*tab_pos[5];

  tab_pos[0] = "pierre";
  tab_pos[1] = "feuille";
  tab_pos[2] = "ciseaux";
  tab_pos[3] = "spoke";
  tab_pos[4] = "lezard";
  return (tab_pos);
}

int	control_grab(char *entree, char *version)
{
  char	**pos;
  int	i;

  pos = init_possibilities();
  i = 0;
  if (my_strlen(entree) == 0)
    return (5);
  if (my_strcmp(entree, "quit") == 0)
    return (6);
  while (i < 5 && my_strstr(entree, pos[i]) == NULL)
    {
      i = i + 1;
      if (my_strcmp(version, "classique") == 0 && i > 2)
	return (5);
    }
  if (i == 5)
    return (5);
  else
    return (i);
}

int	control_quit(char *entree)
{
  char	*tab[2];
  int	i;

  tab[0] = "oui";
  tab[1] = "non";
  i = 0;
  if (my_strlen(entree) == 0)
    return (4);
  while (i < 2 && my_strstr(entree, tab[i]) == NULL)
    {
      i = i + 1;
    }
  if (i == 2)
    return (4);
  else
    return (i);
}

int	control_win(int hand_p, int hand_c, char *version)
{
  if (my_strcmp("classique", version) == 0)
    {
      if ((hand_p + 2) % 3 == hand_c)
	return (1);
      else
	return (0);
    }
  else{
    if ((hand_p + 2) % 5 == hand_c || (hand_p + 4) % 5 == hand_c)
      return (1);
    else
      return (0);
  }
}
