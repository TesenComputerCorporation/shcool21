/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjerde <jjerde@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 15:45:52 by jjerde            #+#    #+#             */
/*   Updated: 2018/09/30 20:40:04 by jjerde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	mmatch(char *s1, char *s2, int pos1, int pos2)
{
	if (s2[pos2] == '*' && s2[pos2 + 1] == '*')
		return (mmatch(s1, s2, pos1, pos2 + 1));
	if (s1[pos1] == '\0')
	{
		if (s2[pos2] == '\0' || (s2[pos2] == '*' && s2[pos2 + 1] == '\0'))
			return (1);
		else
			return (0);
	}
	else if (s2[pos2] == '\0')
		return (0);
	if (s1[pos1] == s2[pos2])
		return (mmatch(s1, s2, pos1 + 1, pos2 + 1));
	else
	{
		if (s2[pos2] == '*')
		{
			if (s1[pos1] == s2[pos2 + 1] && mmatch(s1, s2, pos1, pos2 + 1))
				return (1);
			return (mmatch(s1, s2, pos1 + 1, pos2));
		}
	}
	return (0);
}

int	match(char *s1, char *s2)
{
	return (mmatch(s1, s2, 0, 0));
}
