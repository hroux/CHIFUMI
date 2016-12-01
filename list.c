/*
** list.c for  in /home/hugues/DEVC/CHIFUMI/roux_a/CHIFUMI
** 
** Made by ROUX Hugues
** Login   <roux_a@etna-alternance.net>
** 
** Started on  Fri Oct 28 13:14:22 2016 ROUX Hugues
** Last update Sat Oct 29 09:10:35 2016 ROUX Hugues
*/

#include "my_head.h"
#include <stdlib.h>

t_list		*create_hand(char *str)
{
  t_list	*mail;

  mail = malloc(sizeof(t_list));
  if (mail == NULL)
    return (NULL);
  mail->next = NULL;
  mail->data = my_strdup(str);
  return (mail);
}

t_list		*add_hand(t_list *begin, char *str)
{
  t_list	*head;

  if (begin == NULL)
    {
	begin = create_hand(str);
	head = begin;
    }
  else
    {
      head = begin;
      while (begin->next != NULL)
	{
	  begin = begin->next;
	}
      begin->next = create_hand(str);
    }
  return (head);
}

void	print_list(t_list *begin)
{
  while(begin != NULL)
    {
      my_putstr(begin->data);
      my_putstr(" ");
      begin = begin->next;
    }
}

t_list		*deinit_list(t_list *begin)
{
  t_list	*temp;

  while(begin != NULL)
    {
      temp = begin;
      begin = begin->next;
      free(temp);
    }
  return (NULL);
}
