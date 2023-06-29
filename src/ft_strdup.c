/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillarr <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:22:59 by mvillarr          #+#    #+#             */
/*   Updated: 2023/06/29 15:10:02 by kdi-noce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft/libft.h"

char	*ft_strdup(const char *s1)
{
	char	*newstr;
	char	*tmp;

	newstr = malloc(ft_strlen(s1) * sizeof(char) + 1);
	if (!newstr)
		return (0);
	tmp = (char *)ft_memcpy(newstr, s1, ft_strlen(s1) + 1);
	free(newstr);
	return (tmp);
}
