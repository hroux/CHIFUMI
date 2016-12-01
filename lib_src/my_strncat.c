/*
** my_strcat.c for  in /home/hugues/DEVC/Jour04/roux_a/my_strcat
** 
** Made by ROUX Hugues
** Login   <roux_a@etna-alternance.net>
** 
** Started on  Fri Oct 21 15:31:21 2016 ROUX Hugues
** Last update Fri Oct 21 17:53:27 2016 ROUX Hugues
*/

void	init_n(int *n)
{
  if (*n < 0)
    {
      *n = 10000;
    }
}

char	*my_strncat(char *dest, char *src, int n)
{
  char	*deb;
  int	i;

  i = 1;
  init_n(&n);
  deb = dest;
  while (*deb != '\0')
    {
      deb++;
    }
  if (n > 0)
    {
      *deb = *src;
      src++;
      deb++;
    }
  while (*src != '\0' && i < n)
    {
      *deb = *src;
      src++;
      deb++;
      i++;
    }
  *deb = '\0';
  return (dest);
}
      
  
  
