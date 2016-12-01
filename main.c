/*
** main.c for  in /home/hugues/DEVC/CHIFUMI/roux_a/CHIFUMI
** 
** Made by ROUX Hugues
** Login   <roux_a@etna-alternance.net>
** 
** Started on  Thu Oct 27 17:58:29 2016 ROUX Hugues
** Last update Sat Oct 29 09:06:57 2016 ROUX Hugues
*/

#include "my_head.h"
#include "main.h"

int	main(int argc, char **argv)
{
  int	result;
  int	duration;
  char	*version;
  
  version = "classique";
  duration = 3;
  result = control_arg(argc, argv, &duration, &version);
  if (result != 0)
    print_error(result);
  else
    main_chifumi(version, duration);
  return (0);
}
