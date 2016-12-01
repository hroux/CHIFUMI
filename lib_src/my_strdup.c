/*
** my_strdup.c for  in /home/hugues/DEVC/Jour07/roux_a/my_strdup
** 
** Made by ROUX Hugues
** Login   <roux_a@etna-alternance.net>
** 
** Started on  Mon Oct 24 11:47:33 2016 ROUX Hugues
** Last update Wed Oct 26 11:05:45 2016 ROUX Hugues
*/

#include <stdlib.h>

char	*my_strcpy(char *dest, char *src);
int	my_strlen(char *str);

char	*my_strdup(char *str)
{
  char	*dest;
  int	len;

  len = my_strlen(str);
  dest = malloc((len + 1) * sizeof(str));
  if (dest == NULL)
    {
      return (NULL);
    }
  my_strcpy(dest, str);
  return (dest);
}
