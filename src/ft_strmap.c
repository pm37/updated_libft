/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pimichau <pimichau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 18:30:28 by pimichau          #+#    #+#             */
/*   Updated: 2019/04/10 16:07:52 by pimichau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "updated_libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*s_new;
	size_t	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	if (!(s_new = (char *)malloc(sizeof(*s) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[i])
	{
		s_new[i] = f(s[i]);
		i++;
	}
	s_new[i] = '\0';
	return (s_new);
}
