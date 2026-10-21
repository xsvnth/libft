/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmelamr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 00:00:00 by ahmelamr          #+#    #+#             */
/*   Updated: 2026/10/21 00:00:00 by ahmelamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	print_result(const char *name, int condition)
{
	if (condition)
		printf("[\033[32mOK\033[0m] %s\n", name);
	else
		printf("[\033[31mKO\033[0m] %s\n", name);
}

char	map_test(unsigned int i, char c)
{
	(void)i;
	return (c + 1);
}

void	iter_test(unsigned int i, char *c)
{
	(void)i;
	*c = *c - 1;
}

void	lst_iter_test(void *content)
{
	char	*str;
	int		i;

	str = (char *)content;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32; // Uppercase
		i++;
	}
}

void	*lst_map_test(void *content)
{
	char	*str;
	char	*dup;
	int		i;

	str = (char *)content;
	dup = strdup(str);
	if (!dup)
		return (NULL);
	i = 0;
	while (dup[i])
	{
		if (dup[i] >= 'a' && dup[i] <= 'z')
			dup[i] -= 32;
		i++;
	}
	return ((void *)dup);
}

void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*list;
	t_list	*node2;
	t_list	*node0;
	t_list	*mapped_list;
	t_list	*isolated;
	char	s_len[] = "Hello 42";
	char	mem_s1[10] = "123456789";
	char	mem_s2[10] = "123456789";
	char	src_m[] = "source";
	char	dst_m[10];
	char	ov_buf[20] = "abcdefghij";
	char	lcpy_dest[10];
	size_t	lcpy_ret;
	char	lcat_dest[15] = "hello";
	size_t	lcat_ret;
	char	*dup;
	void	*calloc_test;
	char	*sub;
	char	*join;
	char	*trim;
	char	**split;
	char	*itoa_test;
	char	*m_str;
	char	*map_res;
	char	*i_str;
	int		fd;

	printf("=== STARTING FULL 43-FUNCTION LIBFT TEST ===\n\n");
	/* --- PART 1: Character Classification & Conversion --- */
	print_result("ft_isalpha", ft_isalpha('a') == 1 && ft_isalpha('7') == 0);
	print_result("ft_isdigit", ft_isdigit('5') == 1 && ft_isdigit('a') == 0);
	print_result("ft_isalnum", ft_isalnum('Z') == 1 && ft_isalnum('!') == 0);
	print_result("ft_isascii", ft_isascii(120) == 1 && ft_isascii(300) == 0);
	print_result("ft_isprint", ft_isprint(32) == 1 && ft_isprint(31) == 0);
	print_result("ft_toupper", ft_toupper('a') == 'A'
		&& ft_toupper('Z') == 'Z');
	print_result("ft_tolower", ft_tolower('A') == 'a'
		&& ft_tolower('z') == 'z');
	/* --- PART 1: String & Memory Basics --- */
	print_result("ft_strlen", ft_strlen(s_len) == strlen(s_len));
	ft_memset(mem_s1, 'x', 4);
	print_result("ft_memset", mem_s1[0] == 'x' && mem_s1[3] == 'x'
		&& mem_s1[4] == '5');
	ft_bzero(mem_s2, 3);
	print_result("ft_bzero", mem_s2[0] == 0 && mem_s2[2] == 0
		&& mem_s2[3] == '4');
	ft_memcpy(dst_m, src_m, 7);
	print_result("ft_memcpy", strcmp(dst_m, "source") == 0);
	ft_memmove(ov_buf + 2, ov_buf, 5);
	print_result("ft_memmove", memcmp(ov_buf, "ababcdehij", 10) == 0);
	lcpy_ret = ft_strlcpy(lcpy_dest, "hello", 5);
	print_result("ft_strlcpy", lcpy_ret == 5 && strcmp(lcpy_dest, "hell") == 0);
	lcat_ret = ft_strlcat(lcat_dest, " world", 15);
	print_result("ft_strlcat", lcat_ret == 11 && strcmp(lcat_dest,
			"hello world") == 0);
	print_result("ft_strchr", ft_strchr("hello", 'e') != NULL
		&& ft_strchr("hello", 'z') == NULL);
	print_result("ft_strrchr", ft_strrchr("hello", 'l') != NULL);
	print_result("ft_strncmp", ft_strncmp("abc", "abd", 2) == 0
		&& ft_strncmp("abc", "abd", 3) < 0);
	print_result("ft_memchr", ft_memchr("hello", 'e', 5) != NULL);
	print_result("ft_memcmp", ft_memcmp("abc", "abd", 3) < 0 && ft_memcmp("abc",
			"abc", 3) == 0);
	print_result("ft_strnstr", ft_strnstr("lorem ipsum dolor", "ipsum",
			10) == NULL);
	print_result("ft_atoi", ft_atoi(" 	-4272abc") == -4272);
	dup = ft_strdup("duplicate me");
	print_result("ft_strdup", dup != NULL && strcmp(dup, "duplicate me") == 0);
	free(dup);
	calloc_test = ft_calloc(5, sizeof(int));
	print_result("ft_calloc", calloc_test != NULL);
	free(calloc_test);
	/* --- PART 2: Additional Functions --- */
	sub = ft_substr("tripod", 1, 3);
	print_result("ft_substr", sub != NULL && strcmp(sub, "rip") == 0);
	free(sub);
	join = ft_strjoin("hello ", "world");
	print_result("ft_strjoin", join != NULL && strcmp(join,
			"hello world") == 0);
	free(join);
	trim = ft_strtrim("xxHelloxx", "x");
	print_result("ft_strtrim", trim != NULL && strcmp(trim, "Hello") == 0);
	free(trim);
	split = ft_split("this.is.a.test", '.');
	print_result("ft_split", split != NULL && strcmp(split[0], "this") == 0
		&& strcmp(split[3], "test") == 0);
	if (split)
	{
		for (int i = 0; split[i]; i++)
			free(split[i]);
		free(split);
	}
	itoa_test = ft_itoa(-2147483648);
	print_result("ft_itoa", itoa_test != NULL && strcmp(itoa_test,
			"-2147483648") == 0);
	free(itoa_test);
	m_str = ft_strdup("abcd");
	map_res = ft_strmapi(m_str, map_test);
	print_result("ft_strmapi", map_res != NULL && strcmp(map_res, "bcde") == 0);
	free(m_str);
	free(map_res);
	i_str = ft_strdup("bcde");
	ft_striteri(i_str, iter_test);
	print_result("ft_striteri", strcmp(i_str, "abcd") == 0);
	free(i_str);
	/* --- File Descriptors Output --- */
	fd = open("test_fd.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (fd >= 0)
	{
		ft_putchar_fd('A', fd);
		ft_putstr_fd("BC", fd);
		ft_putendl_fd("DE", fd);
		ft_putnbr_fd(-123, fd);
		close(fd);
		print_result("fd output functions (putchar/str/endl/nbr)", 1);
		remove("test_fd.txt");
	}
	else
		print_result("fd output functions", 0);
	/* --- PART 3: Linked Lists (Bonus) --- */
	list = ft_lstnew(strdup("alpha"));
	node2 = ft_lstnew(strdup("beta"));
	ft_lstadd_back(&list, node2);
	print_result("ft_lstnew & ft_lstadd_back", ft_lstsize(list) == 2);
	print_result("ft_lstsize", ft_lstsize(list) == 2);
	print_result("ft_lstlast", ft_lstlast(list)->content != NULL
		&& strcmp((char *)ft_lstlast(list)->content, "beta") == 0);
	node0 = ft_lstnew(strdup("omega"));
	ft_lstadd_front(&list, node0);
	print_result("ft_lstadd_front", ft_lstsize(list) == 3);
	isolated = ft_lstnew(strdup("isolated"));
	ft_lstdelone(isolated, del_content);
	print_result("ft_lstdelone", 1);
	ft_lstiter(list, lst_iter_test);
	print_result("ft_lstiter", strcmp((char *)list->content, "OMEGA") == 0);
	mapped_list = ft_lstmap(list, lst_map_test, del_content);
	print_result("ft_lstmap", mapped_list != NULL
		&& strcmp((char *)mapped_list->content, "OMEGA") == 0);
	ft_lstclear(&list, del_content);
	ft_lstclear(&mapped_list, del_content);
	print_result("ft_lstclear", list == NULL && mapped_list == NULL);
	printf("\n=== ALL 43 TESTS COMPLETED ===\n");
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
