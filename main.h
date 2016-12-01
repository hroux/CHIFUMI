/*
** main.h for  in /home/hugues/DEVC/CHIFUMI/roux_a/CHIFUMI
** 
** Made by ROUX Hugues
** Login   <roux_a@etna-alternance.net>
** 
** Started on  Fri Oct 28 18:05:54 2016 ROUX Hugues
** Last update Fri Oct 28 18:09:18 2016 ROUX Hugues
*/

#ifndef		_MAIN_H_
# define	_MAIN_H_

int	control_arg(int argc, char **argv, int *duree, char **version);
void	print_error(int code);
void	main_chifumi(char *version, int duration);

#endif		/*_MAIN_H_*/
