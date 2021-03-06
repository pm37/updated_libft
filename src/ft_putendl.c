/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pimichau <pimichau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 18:27:50 by pimichau          #+#    #+#             */
/*   Updated: 2019/04/10 16:11:22 by pimichau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "updated_libft.h"

void	ft_putendl(char const *s)
{
	if (s == 0)
		return ;
	ft_putstr(s);
	ft_putchar('\n');
}
