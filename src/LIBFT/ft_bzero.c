/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillarr <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:51:32 by mvillarr          #+#    #+#             */
/*   Updated: 2022/11/04 13:10:17 by mvillarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str_ptr;

	str_ptr = (char *) s;
	while (n > 0)
	{
		*(str_ptr++) = 0;
		n--;
	}
}