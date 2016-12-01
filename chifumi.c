/*
** chifumi.c for  in /home/hugues/DEVC/CHIFUMI/roux_a/CHIFUMI
** 
** Made by ROUX Hugues
** Login   <roux_a@etna-alternance.net>
** 
** Started on  Fri Oct 28 09:01:37 2016 ROUX Hugues
** Last update Sat Oct 29 10:37:31 2016 ROUX Hugues
*/

#include "my_head.h"
#include <stdlib.h>
#include "chifumi.h"

int	grab_player(char *version)
{
  char	*entree;
  int	result;

  result = 5;
  while (result > 7 || result == 5)
    {
      if (my_strcmp(version, "classique") == 0)
	my_putstr("\nPierre / feuille / ciseaux : ");
      else
	my_putstr("\nPierre / feuille / ciseaux / lezard / spoke : ");
      entree = readLine();
      entree = my_strlowcase(entree);
      result = control_grab(entree,version);
      if (result == 5)
	print_error(result);
    }
    return (result);
}

void	play(int hand, t_player *player, t_player *computer, char *version)
{
  int	hand_comp;
  char	**hands;

  if (my_strcmp("classique", version) == 0)
    hand_comp = my_rand(0, 3);
  else
    hand_comp = my_rand(0, 5);
  hands = init_possibilities();
  my_putstr("Coup ordinateur : ");
  my_putstr(hands[hand_comp]);
  if (hand == hand_comp)
    my_putstr("\nMatch nul\n");
  else if (control_win(hand, hand_comp, version) == 1)
    {
      my_putstr("\n\033[32;01mGagné !\033[00m\n");
      player->score = player->score + 1;
    }
  else
    {
      my_putstr("\n\033[31;01mPerdu !\033[00m\n");
      computer->score = computer->score + 1;
    }
  print_score(player->score, computer->score);
  player->hand_played = add_hand(player->hand_played, hands[hand]);
  computer->hand_played = add_hand(computer->hand_played, hands[hand_comp]);
}

int	continu_play(t_player *player, t_player *computer, int quit)
{
  char	*entree;

  if (quit != 1)
    {
      quit = 2;
      print_winner(player->score, computer->score);
      print_hand(player->hand_played, computer->hand_played);
      player->hand_played = deinit_list(player->hand_played);
      computer->hand_played = deinit_list(computer->hand_played);
      free(player);
      free(computer);
      while (quit > 1)
	{
	  my_putstr("\n\nVoulez vous rejouer (oui / non) : ");
	  entree = readLine();
	  entree = my_strlowcase(entree);
	  quit = control_quit(entree);
	  if (quit > 1)
	    print_error(quit);
	}
    }
  return (quit);
}

t_player	*init_player(t_player *player)
{
  player = malloc(sizeof(t_player));
  if (player == NULL)
    {
      print_error(6);
      return (NULL);
    }
  player->score = 0;
  player->hand_played = NULL;
  return (player);
}

void		main_chifumi(char *version, int duration)
{
  int		hand;
  t_player	*player;
  t_player	*computer;
  int		nb_lap;
  int		quit;
  
  quit = 0;
  while (quit == 0)
    {
      player = init_player(player);
      computer = init_player(computer);
      (player == NULL || computer == NULL) ? (quit = 1) : (quit = 0);
      print_menu(version, duration);
      nb_lap = duration / 2 + 1;
      while (quit == 0 && nb_lap > player->score && nb_lap > computer->score)
	{
	  hand = grab_player(version);
	  if (hand != 6)
	    play(hand, player, computer, version);
	  else
	    quit = 1;
	}
      quit = continu_play(player, computer, quit);
    }
  my_putstr("A la prochaine :) \n");
}
