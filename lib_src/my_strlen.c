/*
** my_strlen.c for  in /home/hugues/DEVC/Jour03/roux_a/my_strlen
** 
** Made by ROUX Hugues
** Login   <roux_a@etna-alternance.net>
** 
** Started on  Thu Oct 20 10:32:33 2016 ROUX Hugues
** Last update Thu Oct 20 15:44:33 2016 ROUX Hugues
*/

int	my_strlen(char *str)
{
  int	result;

  result = 0;
  while (*str != '\0')
    {
      str = str + 1;
      result = result + 1;
    }
  return (result);
}
