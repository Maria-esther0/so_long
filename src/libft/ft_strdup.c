/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillarr <mvillarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:22:59 by mvillarr          #+#    #+#             */
/*   Updated: 2023/07/07 17:42:44 by mvillarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*newstr;

	newstr = malloc(ft_strlen(s1) * sizeof(char) + 1);
	if (!newstr)
		return (0);
	return ((char *)ft_memcpy(newstr, s1, ft_strlen(s1) + 1));
}
