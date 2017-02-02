/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   highscore.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 20:59:51 by jtrujill          #+#    #+#             */
/*   Updated: 2017/02/01 21:30:31 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "blackjack.h"
#include <stdio.h>
#include <stdlib.h>

void	print_intro(int high)
{
	printf("%s", "  --------------------------------------------------------------------  \n\n\n");
	printf("%s", "                     Press Enter to Start the Game\n\n");
	printf("%s", "                         Press [1] for Credits\n\n");
	printf("%s", "                 Press [2] for Linux Compatibility Mode\n\n\n");
	printf("                            High Score: %d\n\n\n", high);
	printf("%s", "  --------------------------------------------------------------------  \n\n");
}

void	score(void)
{
	int		previous;
	FILE	* fp;

	previous = 0;
	fp = fopen("score.txt", "r+");
	fscanf(fp, "%d", &previous);
	rewind(fp);
	system("cat intro.txt");
	print_intro(previous);
	fclose (fp);
}

int		main(int argc, char **argv)
{
	score();
	return (0);
}
