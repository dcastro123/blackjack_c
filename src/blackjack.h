/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   blackjack.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 15:11:52 by jtrujill          #+#    #+#             */
/*   Updated: 2017/02/02 16:15:28 by dcastro-         ###   ########.fr       */
/*   Updated: 2017/02/01 21:51:10 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BLACKJACK_H
# define BLACKJACK_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>

int		black_jack_hand(char *str);
char	get_card(void);
int		main(void);
void	ft_printcard(char *str);
int		dealer_hand(char c);
void	print_hand(char *str, int i, int whois);
void	begin_play(void);
int		player_hand(char *dealer);
int 	small_loan(void);
void	high_score(int score);

#endif
