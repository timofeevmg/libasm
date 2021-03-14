/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epilar <epilar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 09:36:42 by epilar            #+#    #+#             */
/*   Updated: 2021/03/14 17:21:14 by epilar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>

int		ft_strlen(char *s);
char	*ft_strcpy(char *dst, const char *src);
int		ft_strcmp(const char *str1, const char *str2);
int		ft_write(int fd, const void *buf, size_t n);
int		ft_read(int fd, const void *buf, size_t n);
char	*ft_strdup(const char *s);

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

//write
	char	*string;
	int		ret_my;
	int		ret_orig;

//read
	int		fd;
	int		rd;
	char	*buf;

//strdup
	char	*s;
	char	*d;

//strlen
	s1 = "hello";
	s2 = "";
	s3 = NULL;
	printf("\n-strlen--------------\n");
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
	printf("\n-strcpy--------------\n");
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
	printf("\n-strcmp--------------\n");
	printf("dif: %d | must be 52\n", ft_strcmp(str1, str2));
	printf("dif: %d | must be 0\n", ft_strcmp(str3, str4));
	printf("dif: %d | must be -113\n", ft_strcmp(str5, str6));
	printf("dif_orig: %d | must be -113\n", strcmp(str5, str6));

//write
	string = "hello\n";
	printf("\n-write--------------\n");
	ret_my = ft_write(1, string, 6);
	printf("error_my: %d\n", errno);
	printf("ret_my= %d | must be 6\n", ret_my);
	ret_orig = write(1, string, 6);
	printf("error_orig: %d\n", errno);
	printf("ret_orig= %d | must be 6\n", ret_orig);

	printf("-write&error---------\n");
	ret_my = ft_write(1000, string, 6);
	printf("error_my: %d | must be 9\n", errno);
	printf("ret_my= %d | must be -1\n", ret_my);
	ret_orig = write(1000, string, 6);
	printf("error_orig: %d | must be 9\n", errno);
	printf("ret_orig= %d | must be -1\n", ret_orig);

//read
	fd = open("readtest.txt", O_RDONLY | 0444);
	buf = (char *)malloc(10);
	rd = ft_read(fd, buf, 10);
	printf("\n-read--------------\n");
	printf("buf: %s | must be 12345qwert\n", buf);
	printf("-read&error----------\n");
	rd = ft_read(1000, buf, 10);
	printf("error: %d | must be 9\n", errno);
	printf("rd= %d | must be -1\n", rd);
	free(buf);
	close(fd);

//strdup
	s = "hello";
	d = ft_strdup(s);
	printf("\n-strdup------------\n");
	printf("%s | must be hello\n", d);
	return (0);
}