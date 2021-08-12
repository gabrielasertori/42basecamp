/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 22:02:51 by gcosta-d          #+#    #+#             */
/*   Updated: 2021/07/29 01:57:06 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	s;
	int	f;

	s = 0;
	if (*to_find == 0)
		return (str);
	while (str[s] != '\0')
	{
		f = 0;
		if (str[s] == to_find[f])
		{
			while (str[s] == to_find[f])
			{
				s++;
				f++;
				if (to_find[f] == '\0')
					return (&str[s - f]);
			}
		}
		s++;
	}
	return (0);
}
