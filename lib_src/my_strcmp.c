/*
** my_strcmp.c for  in /home/hugues/DEVC/Jour04/roux_a/my_strcmp
** 
** Made by ROUX Hugues
** Login   <roux_a@etna-alternance.net>
** 
** Started on  Fri Oct 21 13:21:50 2016 ROUX Hugues
** Last update Fri Oct 21 14:09:14 2016 ROUX Hugues
*/

int	my_strcmp(char *s1, char *s2)
{
  while (*s1 != '\0' && *s2 != '\0')
    {
      if (*s1 < *s2)
	{
	  return (-1);
	}
      if (*s1 > *s2)
	{
	  return (1);
	}
      s1 = s1 + 1;
      s2 = s2 + 1;
      if (*s1 == '\0' && *s2 != '\0')
	{
	  return (-1);
	}
      if (*s2 == '\0' && *s1 != '\0')
	{
	  return (1);
	}
    }
  return (0);
}
