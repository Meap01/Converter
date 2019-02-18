/* 
A fast progam, used to convert numbers.
Program by Daniel Krasovski.
*/
#include <stdio.h>
#include <stdlib.h>

float menu1(float);
float menu2(float);
float menu3(float);
float menu4(float);
float menu5(float);
float menu6(float);

float fahrenheit;
float celsius;
float metre;
float centimetres;
float inches;
float feet;
float ans;


int main()
{
	int menu;
	int loop = 0;


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
			ans = menu1(fahrenheit);
			printf("the degree in fahrenheit is: %f \n \n", ans);
        }

		if (menu == 2)
		{
            ans = menu2(celsius);
			printf("the degree in celsius is: %f \n \n", ans);
		}
		
		if (menu == 3)
		{
            ans = menu3(inches);
			printf("The value is %f inches \n \n", ans);
		}

		if (menu == 4)
		{
            ans = menu4(feet);
			printf("the value is: %f feet \n \n", ans);
		}

		if (menu == 5)
		{
			ans = menu5(metre);
			printf("The value is %f metres \n \n", ans);
		}

		if (menu == 6)
		{
			ans = menu6(centimetres);
			printf("the value is %f centimetres. \n \n", ans);
		}
		if (menu == 7)
		{
			printf("The program is now closing");
			loop = 1;

		}
	}
}

float menu1(float fahrenheit)
{
	printf("Celsius to Fahrenheit Converter\n ");
	printf("Enter the celsius value: \n");
	scanf("%f", &celsius);
	fahrenheit = (celsius * 1.8) + 32;
	return fahrenheit;
}

float menu2(float celsius)
{
	printf("Fahrenheit to Celcius converter\n");
	printf("Enter a temperature in fahrenheit \n");
	scanf("%f", &fahrenheit);
	celsius = (fahrenheit - 32.0) * (5.0 / 9.0);
	return celsius;

}

float menu3(float inches)
{
	printf("Metres to inches converter \n");
	printf("Enter the metre value: \n");
	scanf("%f", &metre);
	inches = metre * 39.37;
	return inches;
}

float menu4(float feet)
{
	printf("Inches to feet converter \n");
	printf("Enter the inches Value: \n");
	scanf("%f", &inches);
	feet = inches / 12;   
	return feet;
}

float menu5(float metre)
{
	printf("Feet to metre converter \n");
	printf("Enter the feet value: \n");
	scanf("%f", &feet);
	metre = feet / 3.281;
	return metre;

}

float menu6(float centimetres)
{
	printf("Inches to Centimetres converter: \n");
	printf("Enter the inches value: \n");
	scanf("%d", &inches);
	centimetres = (inches * 2.54);
	return centimetres;
}