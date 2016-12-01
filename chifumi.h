/*
** chifumi.h for  in /home/hugues/DEVC/CHIFUMI/roux_a/CHIFUMI
** 
** Made by ROUX Hugues
** Login   <roux_a@etna-alternance.net>
** 
** Started on  Fri Oct 28 11:15:31 2016 ROUX Hugues
** Last update Sat Oct 29 09:46:17 2016 ROUX Hugues
*/

#ifndef		_CHIFUMI_H_
# define	_CHIFUMI_H_

void	print_error(int n);
void	print_menu(char *version, int duration);
void	print_score(int score1, int score2);
void	print_winner(int score1, int score2);
void	print_hand(t_list *l1, t_list *l2);
int	control_grab(char *entree, char *version);
int	control_quit(char *entree);
int	control_win(int hand_p, int hand_c, char *version);
char	**init_possibilities();
t_list	*add_hand(t_list *begin, char *str);
t_list	*deinit_list(t_list *begin);

#endif		/*_CHIFUMI_H_*/
