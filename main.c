/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epilar <epilar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 09:36:42 by epilar            #+#    #+#             */
/*   Updated: 2021/03/12 11:12:34 by epilar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *s);
char	*ft_strcpy(char *dst, const char *src);


int		main(void)
{
//strlen
	char	*s1;
	char	*s2;
	char	*s3;

//strcpy
	char	*dst;
	char	*src;


//strlen
	s1 = "hello";
	s2 = "";
	s3 = NULL;
	printf("s1 length= %d | must be 5\n", ft_strlen(s1));
	printf("s2 length= %d | must be 0\n", ft_strlen(s2));
	printf("s3 length= %d | must be 0\n", ft_strlen(s3));

//strcpy
	src = "hello";
	dst = (char *)malloc(6);
	printf("dst: %s | must be hello\n", ft_strcpy(dst, src));

	return (0);
}