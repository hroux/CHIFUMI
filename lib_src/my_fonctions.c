/*
** my_fonctions.c for  in /home/hugues/DEVC/CHIFUMI/roux_a/lib_src
** 
** Made by ROUX Hugues
** Login   <roux_a@etna-alternance.net>
** 
** Started on  Thu Oct 27 17:44:39 2016 ROUX Hugues
** Last update Thu Oct 27 17:54:17 2016 ROUX Hugues
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <time.h>

char		*readLine()
{
  ssize_t	ret;
  char		*buff;

  if ((buff = malloc(sizeof(*buff) * (50 + 1))) == NULL)
    return (NULL);
  if ((ret = read(0,buff, 50)) > 1)
    {
      buff[ret - 1] = '\0';
      return (buff);
    }
  buff[0] = '\0';
  return (buff);
}

int	my_rand(int val1, int val2)
{
  int	random;

  srand(time(NULL));
  random = (rand() % val2) + val1;
  return (random);
}
