/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_hand.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 14:39:47 by jtrujill          #+#    #+#             */
/*   Updated: 2017/02/02 15:56:58 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "blackjack.h"

int		player_hand(char *dealer)
{
	int		i;
	int		d;
	int		flag;
	int		res;
	char	*hand;
	char	next[50];

	i = 0;
	res = 0;
	d = 0;
	flag = 0;
	memset(next, '\0', 50);
	hand = strdup((const char *)("......................"));
	hand[i] = get_card();
	i++;
	hand[i] = get_card();
	i++;
	if (black_jack_hand(hand) == 21)
	{
		print_hand(hand, black_jack_hand(hand), 1);
		return (21);
	}
	while (black_jack_hand(hand) < 21)
	{
		system("clear");
		printf("%s", "..........................................\n\n");
		print_hand(dealer, black_jack_hand(dealer), 2);
		printf("%s", "\n..........................................\n\n");
		print_hand(hand, black_jack_hand(hand), 1);
		printf("%s", "\n..........................................\n");
		memset(next, '\0', 50);
		/* 
		 * Adding in a check here for Split. gonna try and do the double implementation after
		 * hopefully this doesnt break the functionality of the regular hit or stay
		 * incorporating two into one should be fun.
		 * calls the Player_split function and creates a new game with two hands. will work on printing player hands/dealer hands later
			if (hand[0] == hand[1])
			{
				return (player_split(hand[0], hand[1]));
				 //this should exit out of the while loop and return?? maybe i 
				//should just have the playersplit function end the game since returning to this function would be pointless
			}
		*/
		printf("\n%s", "Would you like to either Hit (h), Stand (s), Surrender (u), or Double (d)? ");
		fgets(next, sizeof(next), stdin);
		switch(tolower(next[0]))
		{
			case 'h':
				hand[i] = get_card();
				i++;
				break;
			case 'd':
				hand[i] = get_card();
				i++;
				d = 1;
				break;
			case 'u':
				flag = 1;
				break;
			default:
				return (black_jack_hand(hand));
		}
		res = black_jack_hand(hand);
		print_hand(hand, res, 1);
		if (d == 1)
		{
			return (res + 200);
		}
		else if (flag == 1)
		{
			return (res + 300);
		}
	}
	return (res);
}
