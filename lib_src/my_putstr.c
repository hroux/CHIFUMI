/*
** my_putstr.c for  in /home/hugues/DEVC/Jour03/roux_a/my_putstr
** 
** Made by ROUX Hugues
** Login   <roux_a@etna-alternance.net>
** 
** Started on  Thu Oct 20 10:24:02 2016 ROUX Hugues
** Last update Thu Oct 20 15:34:06 2016 ROUX Hugues
*/

void	my_putchar(char c);

void	my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str = str + 1;
    }
}
