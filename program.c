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
	float metre;
	float centimetres;
	float inches;
	float feet;

	while (loop == 0)
	{
		printf("Which units would you like to convert? \n \n");
		printf("1. celsius to Fahrenheit \n");
		printf("2. Fahrenheit to celsius \n");
		printf("3. metres to inches \n");
		printf("4. Inches to feet \n");
		printf("5. Feet to metres \n");
		printf("6. Inches to centimetres \n");
		printf("7. End program \n");
		scanf("%d", &menu);

		if (menu == 1)
		{
			printf("Celsius to Fahrenheit Converter\n ");
			printf("Enter the celsius value: \n");
			scanf("%f", &celsius);
			fahrenheit = (celsius * 1.8) + 32;
			printf("the degree in fahrentheit is: %f \n \n", fahrenheit);
            getchar();
            }

		if (menu == 2)
		{
			printf("Fahrenheit to Celcius converter\n");
			printf("Enter a temperature in fahrenheit \n");
			scanf("%f", &fahrenheit);
			celsius = (fahrenheit - 32.0) * (5.0 / 9.0);
			printf("the degree in celsius is: %f \n \n", celsius);
		}
		
		if (menu == 3)
		{
			printf("Metres to inches converter \n");
			printf("Enter the metre value: \n");
			scanf("%f", &metre);
			inches = metre * 39.37;
			printf("The value is %f inches \n \n", &inches);
		}

		if (menu == 4)
		{
			printf("Inches to feet converter \n");
			printf("Enter the inches Value: \n");
			scanf("%f", &inches);
			feet = inches / 12;
			printf("the value is: %f feet \n \n", feet);
		}

		if (menu == 5)
		{
			printf("Feet to metre converter \n");
			printf("Enter the feet value: \n");
			scanf("%f", &feet);
			metre = feet / 3.281;
			printf("The value is %f metres \n \n", metre);
		}

		if (menu == 6)
		{
			printf("Inches to Centimetres converter: \n");
			printf("Enter the inches value: \n");
			scanf("%d", &inches);
			centimetres = inches * 2.54;
			printf("the value is %f centimetres. \n \n", centimetres);
		}
		if (menu == 7)
		{
			printf("The program is now closing");
			loop = 1;

		}
	}


}