/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillarr <mvillarr@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:11:01 by mvillarr          #+#    #+#             */
/*   Updated: 2023/05/12 16:11:03 by mvillarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int count_moves(void)
{
	static int mv;

	if (!mv)
		return (0);
	while (mv)
		mv++;
	ft_printf("mv %d\n", mv);
	return (0);
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while ((str1[i] != '\0' && str2[i] != '\0') && (str1[i] == str2[i]))
		i++;
	return (str1[i] - str2[i]);
}
