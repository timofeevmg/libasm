/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epilar <epilar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 09:36:42 by epilar            #+#    #+#             */
/*   Updated: 2021/03/13 14:56:58 by epilar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_strlen(char *s);
char	*ft_strcpy(char *dst, const char *src);
int		ft_strcmp(const char *str1, const char *str2);


int		main(void)
{
//strlen
	char	*s1;
	char	*s2;
	char	*s3;

//strcpy
	char	*dst;
	char	*src;
	char	*dst1;
	char	*src1;
	char	*dst2;
	char	*src2;

//strcmp
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	char	*str5;
	char	*str6;

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
	src1 = "hello";
	dst1 = src1;
	src2 = "hello";
	dst2 = NULL;
	printf("dst: %s | must be hello\n", ft_strcpy(dst, src));
	printf("dst: %s | must be hello\n", ft_strcpy(dst1, src1));
	printf("dst: %s | must be (null)\n", ft_strcpy(dst2, src2));

//strcmp
	str1 = "12345";
	str2 = "123";
	str3 = "abc";
	str4 = "abc";
	str5 = "";
	str6 = "qwerty";
	printf("dif: %d | must be 52\n", ft_strcmp(str1, str2));
	printf("dif: %d | must be 0\n", ft_strcmp(str3, str4));
	printf("dif: %d | must be -113\n", ft_strcmp(str5, str6));
	printf("dif_orig: %d | must be -113\n", strcmp(str5, str6));

	return (0);
}