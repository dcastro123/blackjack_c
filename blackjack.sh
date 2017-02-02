clear
cd src > /dev/null
cd intro > /dev/null
clang score.c > /dev/null
./a.out
cd .. > /dev/null
read input
if [ "$input" = "1" ] ; then
	clear
	cat credits.txt
elif [ "$input" = "2" ] ; then
	echo "\nFixing...you only need to run this the first time you play\n"
	mv get_card.c old_get_card.c
	cp linux_card.c get_card.c
	make fclean > /dev/null
	make re > /dev/null
	make clean > /dev/null
	./blackjack
else
	make re > /dev/null
	make clean > /dev/null
	./blackjack
fi
