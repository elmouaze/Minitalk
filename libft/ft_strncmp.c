/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:53:57 by ael-moua          #+#    #+#             */
/*   Updated: 2023/11/07 11:08:54 by ael-moua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	tmp1 = (unsigned char *)s1;
	tmp2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (tmp1[i] && tmp2[i] && i < n - 1)
	{
		if (tmp1[i] != tmp2[i])
			return (tmp1[i] - tmp2[i]); 
		i++;
	}
	return (tmp1[i] - tmp2[i]);
}