# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/28 15:14:23 by jtrujill          #+#    #+#              #
#    Updated: 2017/02/01 21:50:53 by jtrujill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = blackjack
INC = -I blackjack.h
FLAGS = clang -Wall -Wextra -Werror

SRCS = black_jack.c get_card.c print_card.c dealer_hand.c begin_play.c player_hand.c print_hand.c small_loan.c highscore.c main.c

all: $(NAME)

$(NAME):
	$(FLAGS) $(INC) -o $(NAME) $(SRCS)

clean:
	rm -rf

fclean: clean
	rm -rf $(NAME)

re: fclean all
