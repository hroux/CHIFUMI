/*
** my_strlowcase.c for  in /home/hugues/DEVC/Jour02/roux_a/my_strlowcase
** 
** Made by ROUX Hugues
** Login   <roux_a@etna-alternance.net>
** 
** Started on  Wed Oct 19 13:11:22 2016 ROUX Hugues
** Last update Fri Oct 28 09:31:11 2016 ROUX Hugues
*/

void	my_putchar(char c);

char		*my_strlowcase(char str[])
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] > 64 && str[i] < 91)
	{
	  str[i] = str[i] + 32;
	}
      else
	{
	  str[i] = str[i];
	}
      i = i + 1;
    }
  str[i] = '\0';
  return (str);
}
