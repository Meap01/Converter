/* 
A fast progam, used to convert numbers.
Program by Daniel Krasovski.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int menu;
	int loop = 0;
	float celsius;
	float fahrenheit;
	float meter;
	float inches;
	float feet;

	while (loop == 0)
	{
		printf("Which units would you like to convert? \n");
		printf("1. celsius to Fahrenheit \n");
		printf("2. Fahrenheit to celsius \n");
		printf("3. Meters to inches \n");
		printf("4. Inches to feet to \n");
		printf("5. Feet to meters \n");
		printf("6. Inches to centimeters \n");
		printf("7. End program");
		scanf("%d", &menu);

		if (menu == 1)
		{
			printf("celsius to Fahrenheit Converter \n ");
			printf("Enter the celsius value: \n");
			scanf("%f", &celsius);
			fahrenheit = (celsius * 1.8) + 32;
			printf("the degree in fahrentheit is: %f ", fahrenheit);


		}

		if (menu == 2)
		{
			printf("Fahrenheit to Celcius converter");
			printf("enter a temperature in fahrenheit \n");
			scanf("%f", &fahrenheit);
			celsius = (fahrenheit - 32.0) * (5.0 / 9.0);
			printf("the degree in celsius is: %f", celsius);
		}



	}


}