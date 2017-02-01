/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_hand.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 14:39:47 by jtrujill          #+#    #+#             */
/*   Updated: 2017/01/31 21:33:02 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "blackjack.h"

int		player_hand(char *dealer)
{
	int		i;
	int		d;
	int		res;
	char	*hand;
	char	next[50];

	i = 0;
	res = 0;
	d = 0;
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
		 * incorporating two into one should be fun
			if (hand[0] == hand[1])
			{
				printf("/n%s", "Would you like to Hit, Stand (s), or Split (p)? ");
				fgets(next, 50, stdin);
				if (tolower(next[0]) == 'h')
				{
					hand[i] == get_card();
					i++;
				}
				else if ((tolower(next[0]) == 'p'))
				{
					CALL ANOTHER FUNCTION OR PROGRAM TO HAVE TWO HANDS?
					hand2[i] == get_card();
					i dont fucking know someone help me
				}
				else
				{
					return (black_jack_hand(hand));
				}
			}
		*/
		printf("\n%s", "Would you like to either Hit, Stand, or Double? ");
		fgets(next, sizeof(next), stdin);
		if (tolower(next[0]) == 'h')
		{
			hand[i] = get_card();
			i++;
		}
		else if (tolower(next[0]) == 'd')
		{
			hand[i] = get_card();
			i++;
			d = 1;
		}
		else
		{
			return (black_jack_hand(hand));
		}
		res = black_jack_hand(hand);
		print_hand(hand, res, 1);
		if (d == 1)
		{
			return (res + 200);
		}
	}
	return (res);
}
