/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   highscore.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 20:59:51 by jtrujill          #+#    #+#             */
/*   Updated: 2017/02/01 21:58:38 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "blackjack.h"

void	high_score(int score)
{
	int		previous;
	FILE	* fp;

	previous = 0;
	fp = fopen("intro/score.txt", "r+");
	fscanf(fp, "%d", &previous);
	rewind(fp);
	if (previous < score)
	{
		fprintf(fp, "%d", score);
	}
	fclose (fp);
}
