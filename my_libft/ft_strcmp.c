/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmontija <jmontija@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 21:04:41 by jmontija          #+#    #+#             */
/*   Updated: 2015/09/08 21:04:45 by jmontija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	if (s1[i] == '\0' && s1[i] != s2[i])
		return (0 - s2[i]);
	else if (s2[i] == '\0' && s1[i] != s2[i])
		return (s1[i]);
	else
		return (s1[i] - s2[i]);
	return (0);
}