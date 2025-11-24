/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sigma_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpple <minpple@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 19:32:03 by chehir            #+#    #+#             */
/*   Updated: 2025/11/23 19:22:42 by minpple          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Make sure to compile without using the -Werror flag, as some of the tests use invalid inputs
// You can ignore the warnings, the project will compile anyway.

int	main(void)
{
	char	*str;
	char	*str2;
	void	*p;
	char	c;
	int		i;
	int		j;
	int		k;

	printf("\n------------------------------ Sigma main ------------------------------\n");
	printf("\nTests ft_printf sigma style by comparing its output to that \nof the original printf.\nMade by chehir on November 16th 2025.\n");
	
	printf("\n----------------------- Test 1: Print an integer -----------------------\n");
	i = 0;
	printf("\nInput: i = 0\n");
	printf("OR printf output: ");
	printf("					Size: %d", printf("%d", i));
	printf("\n");
	
	ft_printf("FT printf output: ");
	ft_printf("					Size: %d", ft_printf("%d", i));
	ft_printf("\n");
	
	i = 123;
	printf("\nInput: i = 10\n");
	printf("OR printf output: ");
	printf("					Size: %d", printf("%d", i));
	printf("\n");
	
	ft_printf("FT printf output: ");
	ft_printf("					Size: %d", ft_printf("%d", i));
	ft_printf("\n");

	i = 2147483647;
	printf("\nInput: i = 2147483647\n");
	printf("OR printf output: ");
	printf("				Size: %d", printf("%i", i));
	printf("\n");
	
	ft_printf("FT printf output: ");
	ft_printf("				Size: %d", ft_printf("%i", i));
	ft_printf("\n");

	i = -2147483648;
	printf("\nInput: i = -2147483648\n");
	printf("OR printf output: ");
	printf("				Size: %d", printf("%d", i));
	printf("\n");
	
	ft_printf("FT printf output: ");
	ft_printf("				Size: %d", ft_printf("%d", i));
	ft_printf("\n");

	printf("\n-------------------- Test 2: Print an unsigned int ---------------------\n");
	i = 5;
	printf("\nInput: i = 5\n");
	printf("OR printf output: ");
	printf("					Size: %d", printf("%u", i));
	printf("\n");
	
	ft_printf("FT printf output: ");
	ft_printf("					Size: %d", ft_printf("%u", i));
	ft_printf("\n");
	
	i = 54321;
	printf("\nInput: i = 54321\n");
	printf("OR printf output: ");
	printf("					Size: %d", printf("%u", i));
	printf("\n");

	ft_printf("FT printf output: ");
	ft_printf("					Size: %d", ft_printf("%u", i));
	ft_printf("\n");

	i = -100;
	printf("\nInput: i = -100\n");
	printf("OR printf output: ");
	printf("				Size: %d", printf("%u", i));
	printf("\n");

	ft_printf("FT printf output: ");
	ft_printf("				Size: %d", ft_printf("%u", i));
	ft_printf("\n");
	
	printf("\n---------------------- Test 3: Print a character -----------------------\n");
	c = 'a';
	printf("\nInput: c = 'a'\n");
	printf("OR printf output: ");
	printf("					Size: %d", printf("%c", c));
	printf("\n");
	
	ft_printf("FT printf output: ");
	ft_printf("					Size: %d", ft_printf("%c", c));
	ft_printf("\n");

	c = '\0';
	printf("\nInput: c = '\\0'\n");
	printf("OR printf output: ");
	printf("					Size: %d", printf("%c", c));
	printf("\n");
	
	ft_printf("FT printf output: ");
	ft_printf("					Size: %d", ft_printf("%c", c));
	ft_printf("\n");

	c = '42';
	printf("\nInput: c = '42'\n");
	printf("OR printf output: ");
	printf("					Size: %d", printf("%c", c));
	printf("\n");

	ft_printf("FT printf output: ");
	ft_printf("					Size: %d", ft_printf("%c", c));
	ft_printf("\n");

	printf("\n------------------------ Test 4: Print a string ------------------------\n");
	str = "Hello World";
	printf("\nInput: str = 'Hello World'\n");
	printf("OR printf output: ");
	printf("				Size: %d", printf("%s", str));
	printf("\n");
	
	ft_printf("FT printf output: ");
	ft_printf("				Size: %d", ft_printf("%s", str));
	ft_printf("\n");

	str = "";
	printf("\nInput: str = ''\n");
	printf("OR printf output: ");
	printf("					Size: %d", printf("%s", str));
	printf("\n");
	
	ft_printf("FT printf output: ");
	ft_printf("					Size: %d", ft_printf("%s", str));
	ft_printf("\n");

	printf("\n------------------- Test 5: Print a lowercase hex ----------------------\n");
	i = 15;
	printf("\nInput: i = 15\n");
	printf("OR printf output: ");
	printf("					Size: %d", printf("%x", i));
	printf("\n");
	
	ft_printf("FT printf output: ");
	ft_printf("					Size: %d", ft_printf("%x", i));
	ft_printf("\n");

	i = 123456;
	printf("\nInput: i = 123456\n");
	printf("OR printf output: ");
	printf("					Size: %d", printf("%x", i));
	printf("\n");
	
	ft_printf("FT printf output: ");
	ft_printf("					Size: %d", ft_printf("%x", i));
	ft_printf("\n");

	i = -4785;
	printf("\nInput: i = -4785\n");
	printf("OR printf output: ");
	printf("				Size: %d", printf("%x", i));
	printf("\n");
	
	ft_printf("FT printf output: ");
	ft_printf("				Size: %d", ft_printf("%x", i));
	ft_printf("\n");

	printf("\n-------------------- Test 6: Print an uppercase hex --------------------\n");
	i = 15;
	printf("\nInput: i = 15\n");
	printf("OR printf output: ");
	printf("					Size: %d", printf("%X", i));
	printf("\n");
	
	ft_printf("FT printf output: ");
	ft_printf("					Size: %d", ft_printf("%X", i));
	ft_printf("\n");

	i = 123456;
	printf("\nInput: i = 123456\n");
	printf("OR printf output: ");
	printf("					Size: %d", printf("%X", i));
	printf("\n");
	
	ft_printf("FT printf output: ");
	ft_printf("					Size: %d", ft_printf("%X", i));
	ft_printf("\n");

	i = -4785;
	printf("\nInput: i = -4785\n");
	printf("OR printf output: ");
	printf("				Size: %d", printf("%X", i));
	printf("\n");
	
	ft_printf("FT printf output: ");
	ft_printf("				Size: %d", ft_printf("%X", i));
	ft_printf("\n");

	printf("\n-------------------- Test 7: Print a memory address --------------------\n");
	
	printf("\nOR printf output: ");
	printf("			Size: %d", printf("%p", &i));
	printf("\n");
	
	ft_printf("FT printf output: ");
	ft_printf("			Size: %d", ft_printf("%p", &i));
	ft_printf("\n\n");

	
	printf("OR printf output: ");
	printf("			Size: %d", printf("%p", &c));
	printf("\n");
	
	ft_printf("FT printf output: ");
	ft_printf("			Size: %d", ft_printf("%p", &c));
	ft_printf("\n\n");

	
	printf("OR printf output: ");
	printf("			Size: %d", printf("%p", &str));
	printf("\n");
	
	ft_printf("FT printf output: ");
	ft_printf("			Size: %d", ft_printf("%p", &str));
	ft_printf("\n");

	printf("\n-------------------------- Test 8: Print a %% ---------------------------\n");
	printf("\nOR printf output: ");
	printf("					Size: %d", printf("%%"));
	printf("\n");
	
	ft_printf("FT printf output: ");
	ft_printf("					Size: %d", ft_printf("%%"));
	ft_printf("\n");

	printf("\n----------------------- Test 9: Incorrect inputs -----------------------\n");
	printf("\nFlag: '%y'\n");
	printf("OR printf output: ");
	printf("					Size: %d", printf("%y"));
	printf("\n");
	
	ft_printf("FT printf output: ");
	ft_printf("					Size: %d", ft_printf("%y"));
	ft_printf("\n");

	printf("\nInput: string ending with a single '%%'\n");
	printf("OR printf output: ");
	printf("			Size: %d", printf("Formatting error ? %"));
	printf("\n");
	
	ft_printf("FT printf output: ");
	ft_printf("			Size: %d", ft_printf("Formatting error ? %"));
	ft_printf("\n");

	str = NULL;
	printf("\nInput: str = NULL\n");
	printf("OR printf output: ");
	printf("				Size: %d", printf("%s", str));
	printf("\n");
	
	ft_printf("FT printf output: ");
	ft_printf("				Size: %d", ft_printf("%s", str));
	ft_printf("\n");

	p = NULL;
	printf("\nInput: p = NULL\n");
	printf("OR printf output: ");
	printf("					Size: %d", printf("%p", p));
	printf("\n");
	
	ft_printf("FT printf output: ");
	ft_printf("					Size: %d", ft_printf("%p", p));
	ft_printf("\n");

	printf("\n-------------------- Test 10: Ultimate sigma test ----------------------\n");
	str = "Hello World";
	str2 = NULL;
	c = 'Z';
	i = 10;
	j = 1478;
	k = 9258;
	printf("\nInput: str = 'Hello World', str2 = NULL, p = NULL, c = 'Z', i = 10, \nj = 1478, k = 9258\n");
	printf("OR printf output: \n");
	printf("			Size: %d", printf("Super test: %s, %s, %c, %i, \n%x, %p, %p, %%, %k, %X", str, str2, c, i, j, &i, p, k));
	printf("\n");
	
	ft_printf("\nFT printf output: \n");
	ft_printf("			Size: %d\n", ft_printf("Super test: %s, %s, %c, %i, \n%x, %p, %p, %%, %k, %X", str, str2, c, i, j, &i, p, k));
	ft_printf("\n");

	printf("------------------------------------------------------------------------\n");
	printf("\nAll tests completed. Read through them and check that your\nown ft_printf has the same outputs as the original one.\nGood luck!\n\n");
}
