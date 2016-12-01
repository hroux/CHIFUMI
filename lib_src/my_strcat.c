/*
** my_strcat.c for  in /home/hugues/DEVC/Jour04/roux_a/my_strcat
** 
** Made by ROUX Hugues
** Login   <roux_a@etna-alternance.net>
** 
** Started on  Fri Oct 21 15:31:21 2016 ROUX Hugues
** Last update Fri Oct 21 16:17:03 2016 ROUX Hugues
*/

char	*my_strcat(char *dest, char *src)
{
  char	*deb;

  deb = dest;
  while (*deb != '\0')
    {
      deb++;
    }
  *deb = *src;
  src++;
  deb++;
  while (*src != '\0')
    {
      *deb = *src;
      src++;
      deb++;
    }
  *deb = '\0';
  return (dest);
}
      
  
  
