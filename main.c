/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 21:37:08 by atrouill          #+#    #+#             */
/*   Updated: 2020/11/27 22:58:26 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libasm.h"

void	test_ft_strlen(void)
{
	printf("\033[32m/* ************************************** */\n");
	printf("/*               ft_strlen                */\n");
	printf("/* ************************************** */\033[00m\n\n");

	printf("\033[94mresultat : libasm\033[00m\n");
	printf("|%zd|\n", ft_strlen("Hello word"));
	printf("\033[94mresultat : libc\033[00m\n");
	printf("|%zd|\n\n", strlen("Hello word"));

	printf("\033[94mresultat : libasm\033[00m\n");
	printf("|%zd|\n", ft_strlen("a"));
	printf("\033[94mresultat : libc\033[00m\n");
	printf("|%zd|\n\n", strlen("a"));

	printf("\033[94mresultat : libasm\033[00m\n");
	printf("|%zd|\n", ft_strlen("Hello everyone! This is a very long sentence without any interest that I use to check that everything works without too many problems. You don't have to read it so far but apparently it's already too late. Sorry for the lost time! And have a nice day!"));
	printf("\033[94mresultat : libc\033[00m\n");
	printf("|%zd|\n\n", strlen("Hello everyone! This is a very long sentence without any interest that I use to check that everything works without too many problems. You don't have to read it so far but apparently it's already too late. Sorry for the lost time! And have a nice day!"));
}

void	test_ft_strcpy()
{
	char	str1[] = "Hello World !";
	char	str2[] = "Super";
	char	str3[] = "J'adore le C et les chaines de caractères";
	char	str4[] = "quarante-deux";
	char	str5[] = "C'est de la merde hein 2020 ?";
	char	str6[] = "Oups j'avais oublié la 6";
	char	str7[] = "Est-ce que ces test ont encore une utilité ?";
	char	str8[] = "Non. Tester c'est douter";
	char	str9[] = "";
	char	str10[] = "";

	printf("\033[32m/* ************************************** */\n");
	printf("/*               ft_strcpy                */\n");
	printf("/* ************************************** */\033[00m\n\n");

	printf("\033[94mresultat : libasm\033[00m\n");
	printf("|%s|\n", ft_strcpy(str1, str2));
	printf("Erno : [%s]\n", strerror(errno));
	printf("\033[94mresultat : libc\033[00m\n");
	printf("|%s|\n", strcpy(str1, str2));
	printf("Erno : [%s]\n\n", strerror(errno));

	printf("\033[94mresultat : libasm\033[00m\n");
	printf("|%s|\n", ft_strcpy(str3, str4));
	printf("Erno : [%s]\n", strerror(errno));
	printf("\033[94mresultat : libc\033[00m\n");
	printf("|%s|\n", strcpy(str3, str4));
	printf("Erno : [%s]\n\n", strerror(errno));

	printf("\033[94mresultat : libasm\033[00m\n");
	printf("|%s|\n", ft_strcpy(str5, str6));
	printf("Erno : [%s]\n", strerror(errno));
	printf("\033[94mresultat : libc\033[00m\n");
	printf("|%s|\n", strcpy(str5, str6));
	printf("Erno : [%s]\n\n", strerror(errno));

	printf("\033[94mresultat : libasm\033[00m\n");
	printf("|%s|\n", ft_strcpy(str7, str8));
	printf("Erno : [%s]\n", strerror(errno));
	printf("\033[94mresultat : libc\033[00m\n");
	printf("|%s|\n", strcpy(str7, str8));
	printf("Erno : [%s]\n\n", strerror(errno));
}

void	test_ft_strcmp()
{
	char	str1[] = "Hello everyone! This is a very long sentence without any interest that I use to check that everything works without too many problems. You don't have to read it so far but apparently it's already too late. Sorry for the lost time! And have a nice day!";
	char	str2[] = "";

	printf("\033[32m/* ************************************** */\n");
	printf("/*               ft_strcmp                */\n");
	printf("/* ************************************** */\033[00m\n\n");

	printf("\033[94mresultat : libasm\033[00m\n");
	printf("|%d|\n", ft_strcmp("Quarante-Deux", "Quarante-Deux"));
	printf("\033[94mresultat : libc\033[00m\n");
	printf("|%d|\n\n", strcmp("Quarante-Deux", "Quarante-Deux"));

	printf("\033[94mresultat : libasm\033[00m\n");
	printf("|%d|\n", ft_strcmp(str1, str1));
	printf("\033[94mresultat : libc\033[00m\n");
	printf("|%d|\n\n", strcmp(str1, str1));

	printf("\033[94mresultat : libasm\033[00m\n");
	printf("|%d|\n", ft_strcmp(str1, str2));
	printf("\033[94mresultat : libc\033[00m\n");
	printf("|%d|\n\n", strcmp(str1, str2));
}

void	test_ft_write()
{
	printf("\033[32m/* ************************************** */\n");
	printf("/*                ft_write                */\n");
	printf("/* ************************************** */\033[00m\n\n");

	printf("\033[94mresultat : libasm\033[00m\n");
	printf("[%zd]\n", ft_write(1, "Salut 42 !", 10));
	printf("Erno : [%s]\n", strerror(errno));
	printf("\033[94mresultat : libc\033[00m\n");
	printf("[%zd]\n", write(1, "Salut 42 !", 10));
	printf("Erno : [%s]\n\n", strerror(errno));

	printf("\033[94mresultat : libasm\033[00m\n");
	printf("[%zd]\n", ft_write(1, "", 1));
	printf("Erno : [%s]\n", strerror(errno));
	printf("\033[94mresultat : libc\033[00m\n");
	printf("[%zd]\n", write(1, "", 1));
	printf("Erno : [%s]\n\n", strerror(errno));

	printf("\033[94mresultat : libasm\033[00m\n");
	printf("[%zd]\n", ft_write(-420, "Hello everyone! This is a very long sentence without any interest that I use to check that everything works without too many problems. You don't have to read it so far but apparently it's already too late. Sorry for the lost time! And have a nice day!", 251));
	printf("Erno : [%s]\n", strerror(errno));
	printf("\033[94mresultat : libc\033[00m\n");
	printf("[%zd]\n", write(-420, "Hello everyone! This is a very long sentence without any interest that I use to check that everything works without too many problems. You don't have to read it so far but apparently it's already too late. Sorry for the lost time! And have a nice day!", 251));
	printf("Erno : [%s]\n\n", strerror(errno));
}

void	test_ft_read(void)
{
	int		fd;
	ssize_t	read_size;
	char	buff[1000] = { 0 };
	char	buff2[1000] = { 0 };

	printf("\033[32m/* ************************************** */\n");
	printf("/*                 ft_read                */\n");
	printf("/* ************************************** */\033[00m\n\n");

	fd = open("main.c", O_RDONLY);
	read_size = 0;
	read_size = ft_read(fd, buff, 891);
	buff[read_size] = '\0';
	printf("\033[94mresultat : libasm\033[00m\n");
	printf("|%s|[%zd]\n", buff, read_size);
	printf("Erno : [%s]\n", strerror(errno));
	close(fd);

	fd = open("main.c", O_RDONLY);
	read_size = 0;
	read_size = read(fd, buff, 891);
	buff[read_size] = '\0';
	printf("\033[94mresultat : libc\033[00m\n");
	printf("|%s|[%zd]\n", buff, read_size);
	printf("Erno : [%s]\n\n", strerror(errno));
	close(fd);

	read_size = 0;
	read_size = ft_read(-253, buff2, 891);
	buff2[read_size] = '\0';
	printf("\033[94mresultat : libasm\033[00m\n");
	printf("|%s|[%zd]\n", buff2, read_size);
	printf("Erno : [%s]\n", strerror(errno));

	read_size = 0;
	read_size = read(-253, buff2, 891);
	buff2[read_size] = '\0';
	printf("\033[94mresultat : libc\033[00m\n");
	printf("|%s|[%zd]\n", buff2, read_size);
	printf("Erno : [%s]\n\n", strerror(errno));
}

void	test_ft_strdup(void)
{
	char	str1[] = "Hello 42 !";
	char	str2[] = "    VIVE 2020    ";
	char	str3[] = "Hello everyone! This is a very long sentence without any interest that I use to check that everything works without too many problems. You don't have to read it so far but apparently it's already too late. Sorry for the lost time! And have a nice day!";


	printf("\033[32m/* ************************************** */\n");
	printf("/*               ft_strdup                */\n");
	printf("/* ************************************** */\033[00m\n\n");

	printf("\033[94mresultat : libasm\033[00m\n");
	printf("|%s|\n", ft_strdup(str1));
	printf("Erno : [%s]\n", strerror(errno));
	printf("\033[94mresultat : libc\033[00m\n");
	printf("|%s|\n", strdup(str1));
	printf("Erno : [%s]\n\n", strerror(errno));

	printf("\033[94mresultat : libasm\033[00m\n");
	printf("|%s|\n", ft_strdup(str2));
	printf("Erno : [%s]\n", strerror(errno));
	printf("\033[94mresultat : libc\033[00m\n");
	printf("|%s|\n", strdup(str2));
	printf("Erno : [%s]\n\n", strerror(errno));

	printf("\033[94mresultat : libasm\033[00m\n");
	printf("|%s|\n", ft_strdup(str3));
	printf("Erno : [%s]\n", strerror(errno));
	printf("\033[94mresultat : libc\033[00m\n");
	printf("|%s|\n", strdup(str3));
	printf("Erno : [%s]\n\n", strerror(errno));
}


int	main(int argc, char *argv[])
{
	test_ft_strlen();
	errno = 0;
	test_ft_strcpy();
	errno = 0;
	test_ft_strcmp();
	errno = 0;
	test_ft_write();
	errno = 0;
	test_ft_read();
	errno = 0;
	test_ft_strdup();
	return (0);
}
