/*
 * =====================================================================================
 *
 *       Filename:  main_next.c
 *
 *    Description: new version of the calculatorC with auto recognition 
 *
 *        Version:  1.0
 *        Created:  19.04.2024 13:31:48
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
	int a, b;
	char c;

	printf("?: ");

	scanf("%d", &a);
	scanf("%c", &c);
	scanf("%d", &b);

	if (c == '+')
	{
		int plus;
		plus = a + b;
		printf("answer: %d", plus);
		return 0;
	}
	else if (c == '-')
	{
		int minus;
		minus = a - b;
		printf("answer: %d", minus);
		return 0;
	}
	else if (c == '*')
	{
		int multi;
		multi = a * b;
		printf("answer: %d", multi);
		return 0;
	}
	else if (c == '/')
	{
		float deriv;
		deriv = a / b;
		printf("answer: %.2f", deriv);
		return 0;
	}

	return 0;
}
