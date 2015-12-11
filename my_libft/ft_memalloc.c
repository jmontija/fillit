/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmontija <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 19:39:45 by jmontija          #+#    #+#             */
/*   Updated: 2015/12/11 19:39:47 by jmontija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memalloc(size_t size)
{
	char *zone;

	zone = (char *)malloc(sizeof(*zone) * size);
	if (zone == NULL)
		return (NULL);
	return (zone);
}