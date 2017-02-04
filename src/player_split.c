/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_split.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 21:04:11 by dcastro-          #+#    #+#             */
/*   Updated: 2017/02/02 15:53:38 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "blackjack.h"

int		player_split(char *hand1, char *hand2)
{
	int		i;
	int		j;
	int		k;
	int		flag;
	int		result;
	int		result2;
	char	*hand1_temp;
	char	*hand2_temp;
	char	next[50];

	i = 0;
	j = 0;
	k = 0;
	flag = 0;
	memset(next, '\0', 50);
	hand1_temp[i] = hand1[0];
	hand2_temp[i] = hand2[0];
	i++;
	hand1_temp[i] = get_card();
	hand2_temp[i] = get_card();
	i++;
	if (black_jack_hand(hand1_temp) == 21)
	{
		print_hand(hand1_temp, black_jack_hand(hand1_temp), 1);
		return (21);
	}
	if (black_jack_hand(hand2_temp) == 21)
	{
		print_hand(hand2_temp, black_jack_hand(hand2_temp), 1);
		return (21);
	}
	while (black_jack_hand(hand1_temp) < 21)
	{
		/** need to add the printf statements for dealer hands here:
		 *
		 *
		 * writing split code for player hands below:
		 *
		 * 
		*/
		memset(next, '\0', 50);
		printf("\n%s", "Would you like to Hit, Stand, or Double? ");
		fgets(next, sizeof(next), stdin);
		if (tolower(next[0]) == 'h')
		{
			hand1_temp[i] = get_card();
			i++;
		}
		else if (tolower(next[0]) == 'd')
		{
			hand1_temp[i] = get_card();
			i++;
			flag = 1;
		}
		else
		{
			//result = black_jack_hand(hand1_temp);
			//break;
			return (black_jack_hand(hand1_temp));
		result = black_jack_hand(hand1_temp);
		print_hand(hand1_temp, result, 1);
		if (flag == 1)
		{
			//result += 200;
			//break;
			return (result + 200);
		else
		{
			//result += 0;
			//break;
			return (result);
	}
	while (black_jack_hand(hand2_temp) < 21)
	{
		memset(next, '\0', 50);
		printf("\n%s", "Would you like to Hit, Stand, or Double?");
		fgets(next, sizeof(next), stdin);
		if (tolower(next[0]) == 'h')
		{
			hand2_temp[i] = get_card();
			i++;
		}
		else if (tolower(next[0]) == 'd')
		{
			hand2_temp[i] == get_card();
			i++;
			flag = 1;
		}
		else
			return (black_jack_hand(hand));
		result2 = black_jack_hand(hand2_temp);
		print_hand(hand2_temp, result2, 1);
		if (flag == 1)
		{
		//	result += 200;
		//	break;
			return (result2 + 200);
		else
		{
		//	result2 += 0;
		//	break;
			return (result2);

