/*
** my_head.h for  in /home/hugues/DEVC/CHIFUMI/roux_a/CHIFUMI
** 
** Made by ROUX Hugues
** Login   <roux_a@etna-alternance.net>
** 
** Started on  Thu Oct 27 17:55:26 2016 ROUX Hugues
** Last update Sat Oct 29 09:19:40 2016 ROUX Hugues
*/

#ifndef		_MY_HEAD_H_
# define	_MY_HEAD_H_

void	my_putstr(char *str);
int	my_strcmp(char *str1, char *str2);
int	my_getnbr(char *str);
void	my_put_nbr(int n);
char	*my_strlowcase(char *str);
char	*readLine();
int	my_strlen(char *str);
int	my_rand(int a, int b);
char	*my_strdup(char *str);
char	*my_strstr(char *str, char *to_find);

typedef struct	s_list
{
  void		*data;
  struct s_list	*next;
}		t_list;
typedef struct	s_player
{
  int		score;
  struct s_list	*hand_played;
}		t_player;

#endif		/*MY_HEAD_H*/
