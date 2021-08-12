#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src); //ex00
char	*ft_strncpy(char *dest, char *src, unsigned int n); //ex01
int		ft_str_is_alpha(char *str); //ex02
int		ft_str_is_numeric(char *str); //ex03
int		ft_str_is_lowercase(char *str); //ex04
int		ft_str_is_uppercase(char *str); //ex05
int		ft_str_is_printable(char *str); //ex06
char	*ft_strupcase(char *str); //ex07
char	*ft_strlowcase(char *str); //ex08
char	*ft_strcapitalize(char *str); //ex09
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size); //ex10
void	ft_putstr_non_printable(char *str); //ex11
void	*ft_print_memory(void *addr, unsigned int size); //ex12

int	main(void)
{
	////Ex00 ft_strcpy
	////compiler: gcc -Wall -Werror -Wextra ft_strcpy.c ../main.c
	//char	string1[] = "";
	//char	string2[] = "testestes";
	//printf("string1 antes da copia: %s\n", string1);
	//ft_strcpy(string1, string2);
	//printf("string1 depois da copia: %s\n", string1);

	////Ex01 ft_strncpy
	////compiler: gcc -Wall -Werror -Wextra ft_strncpy.c ../main.c
	//char	string1[10] = "";
	//char	string2[6] = "teste";
	//printf("string1 antes da copia: %s\n", string1);
	//ft_strncpy(string1, string2, 4);
	//printf("string1 depois da copia: %s\n", string1);

	////Ex02 ft_str_is_alpha
	////compiler: gcc -Wall -Werror -Wextra ft_str_is_alpha.c ../main.c
	//char	*string1 = "teste";
	//char	*string2 = "t3¨%@#*&st3";
	//char	*string3 = "3456";
	//char	*string4 = "";
	//printf("string1: %d\n", ft_str_is_alpha(string1));
	//printf("string2: %d\n", ft_str_is_alpha(string2));
	//printf("string3: %d\n", ft_str_is_alpha(string3));
	//printf("string4: %d\n", ft_str_is_alpha(string4));

	////Ex03 ft_str_is_numeric
	////compiler: gcc -Wall -Werror -Wextra ft_str_is_numeric.c ../main.c
	//char	*string1 = "teste";
	//char	*string2 = "t3¨%@#*&st3";
	//char	*string3 = "3456";
	//char	*string4 = "";
	//printf("string1: %d\n", ft_str_is_numeric(string1));
	//printf("string2: %d\n", ft_str_is_numeric(string2));
	//printf("string3: %d\n", ft_str_is_numeric(string3));
	//printf("string4: %d\n", ft_str_is_numeric(string4));

	////Ex04 ft_str_is_lowercase
	////compiler: gcc -Wall -Werror -Wextra ft_str_is_lowercase.c ../main.c
	//char	*string1 = "teste";
	//char	*string2 = "TEs%3te";
	//char	*string3 = "3456";
	//char	*string4 = "";
	//printf("string1: %d\n", ft_str_is_lowercase(string1));
	//printf("string2: %d\n", ft_str_is_lowercase(string2));
	//printf("string3: %d\n", ft_str_is_lowercase(string3));
	//printf("string4: %d\n", ft_str_is_lowercase(string4));

	////Ex05 ft_str_is_uppercase
	////compiler: gcc -Wall -Werror -Wextra ft_str_is_uppercase.c ../main.c
	//char	*string1 = "teste";
	//char	*string2 = "TESTE";
	//char	*string3 = "3456";
	//char	*string4 = "";
	//printf("string1: %d\n", ft_str_is_uppercase(string1));
	//printf("string2: %d\n", ft_str_is_uppercase(string2));
	//printf("string3: %d\n", ft_str_is_uppercase(string3));
	//printf("string4: %d\n", ft_str_is_uppercase(string4));

	////Ex06 ft_str_is_printable
	////compiler: gcc -Wall -Werror -Wextra ft_str_is_printable.c ../main.c
	//char	*string1 = "\n";
	//char	*string2 = "TESTE";
	//char	*string3 = "3456";
	//char	*string4 = "";
	//printf("string1: %d\n", ft_str_is_printable(string1));
	//printf("string2: %d\n", ft_str_is_printable(string2));
	//printf("string3: %d\n", ft_str_is_printable(string3));
	//printf("string4: %d\n", ft_str_is_printable(string4));

	////Ex07 ft_strupcase
	////compiler: gcc -Wall -Werror -Wextra ft_strupcase.c ../main.c
	//char string1[] = "teste";
    //char string2[] = "TESTE";
    //char string3[] = "3456";
    //char string4[] = "";
    //ft_strupcase(string1);
    //ft_strupcase(string2);
    //ft_strupcase(string3);
    //ft_strupcase(string4);
    //printf("str1: %s\n", string1);
    //printf("str2: %s\n", string2);
    //printf("str3: %s\n", string3);
    //printf("str4: %s\n", string4);

	////Ex08 ft_strlowcase
	////compiler: gcc -Wall -Werror -Wextra ft_strlowcase.c ../main.c
	//char string1[] = "teste";
    //char string2[] = "TESTE";
    //char string3[] = "3456";
    //char string4[] = "";
    //ft_strlowcase(string1);
    //ft_strlowcase(string2);
    //ft_strlowcase(string3);
    //ft_strlowcase(string4);
    //printf("str1: %s\n", string1);
    //printf("str2: %s\n", string2);
    //printf("str3: %s\n", string3);
    //printf("str4: %s\n", string4);

	////Ex09 ft_strcapitalize
	////compiler: gcc -Wall -Werror -Wextra ft_strcapitalize.c ../main.c
	//char string1[] = "TESTEEEEE ESSE";
    //char string2[] = "tEsTe-54tes-54 tes+TESTINHO";
    //char string3[] = "3456";
    //char string4[] = "";
    //ft_strcapitalize(string1);
    //ft_strcapitalize(string2);
    //ft_strcapitalize(string3);
    //ft_strcapitalize(string4);
    //printf("str1: %s\n", string1);
    //printf("str2: %s\n", string2);
    //printf("str3: %s\n", string3);
    //printf("str4: %s\n", string4);

	return (0);
}

