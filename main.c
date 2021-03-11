/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epilar <epilar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 09:36:42 by epilar            #+#    #+#             */
/*   Updated: 2021/03/11 11:59:04 by epilar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *s);

int		main(void)
{
	char	*s1;
	char	*s2;

	s1 = "hello";
	s2 = "";
	printf("s1 length= %d | must be 5\n", ft_strlen(s1));
	printf("s2 length= %d | must be 0\n", ft_strlen(s2));
	return (0);
}