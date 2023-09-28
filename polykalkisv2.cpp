#include <iostream>
#include <stdlib.h>
/// <summary>
/// Function for user to input polynomial.
/// </summary>
/// <returns>Array with deg1, deg2, deg3, deg0.</returns>
int* polyinput()
{
	// Third degree polynomial -> (deg3^3) + (deg2^2) + (deg1^1) + (deg0)
	int deg1;
	int deg2;
	int deg3;
	int deg0;
	std::cout << "Enter a number for the third degree\n";
	std::cin >> deg3;
	std::cout << "Enter a number for the second degree\n";
	std::cin >> deg2;
	std::cout << "Enter a number for the first degree\n";
	std::cin >> deg1;
	std::cout << "Enter the constant\n";
	std::cin >> deg0;
	std::cout << "Your polynomial is: " << deg3 << "x^3 + " << deg2 << "x^2 + " << deg1 << "x^1 + " << deg0 << "\n\n\n";
	int* poly = new int[4] { deg0, deg1, deg2, deg3 };
	return poly;
}
/// <summary>
/// Function  for multiplying two polynomials.
/// </summary>
/// <param name="poly1">The first polynomial the user input.</param>
/// <param name="poly2">The second polynomial the user input.</param>
void multiplypoly(int* poly1, int* poly2)
{
	int exp6 = 0;
	int exp5 = 0;
	int exp4 = 0;
	int exp3 = 0;
	int exp2 = 0;
	int exp1 = 0;
	int exp0 = 0;
	int i;
	int j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (i + j == 6)
			{
				exp6 += (poly1[i] * poly2[j]);
			}
			if (i + j == 5)
			{
				exp5 += (poly1[i] * poly2[j]);
			}
			if (i + j == 4)
			{
				exp4 += (poly1[i] * poly2[j]);
			}
			if (i + j == 3)
			{
				exp3 += (poly1[i] * poly2[j]);
			}
			if (i + j == 2)
			{
				exp2 += (poly1[i] * poly2[j]);
			}
			if (i + j == 1)
			{
				exp1 += (poly1[i] * poly2[j]);
			}
			if (i + j == 0)
			{
				exp0 += (poly1[i] * poly2[j]);
			}
		}
	}
	std::cout << "Your polynomials multiplied = " << exp6 << "x^6 + " << exp5 << "x^5 + " << exp4 << "x^4 + " << exp3 << "x^3 + " << exp2 << "x^2 + " << exp1 << "x + " << exp0 << "\n";
}
/// <summary>
/// Function for adding two polynomials
/// </summary>
/// <param name="poly3">first polynomial</param>
/// <param name="poly4">second polynomial</param>
void addpoly(int* poly3, int* poly4)
{
	int add3 = poly3[3] + poly4[3];
	int add2 = poly3[2] + poly4[2];
	int add1 = poly3[1] + poly4[1];
	int add0 = poly3[0] + poly4[0];
	std::cout << add3 << "x^3 + " << add2 << "x^2 + " << add1 << "x + " << add3 << "\n";
}
/// <summary>
/// function for the derivative of a polynomial
/// </summary>
/// <param name="poly5">the polynomial</param>
void deripoly(int* poly5)
{
	int deri3 = 3 * poly5[3]; // Derivative of x^3 is 3x^2
	int deri2 = 2 * poly5[2]; // Derivative of x^2 is 2x
	int deri1 = poly5[1];     // Derivative of x is 1
	std::cout << "The derivative of the polynomial is: " << deri3 << "x^2 + " << deri2 << "x + " << deri1 << "\n";
}
/// <summary>
/// Menu for polynomial math
/// </summary>
void polymenu()
{
	while(true)
	{
	int polycase;
	std::cout << "\n\nPick your poison\n";
	std::cout << "[1] Multiply two polynomials\n";
	std::cout << "[2] Add two polynomials\n";
	std::cout << "[3] Derivative of one polynomial\n";
	std::cout << "[4] KILL THE PROGRAM\n";
	std::cin >> polycase;

	switch (polycase)
	{
	case 1:
	{
		std::cout << "\nEnter your first polynomial\n";
		int* poly1 = polyinput();
		std::cout << "\nEnter your second polynomial\n";
		int* poly2 = polyinput();
		multiplypoly(poly1, poly2);
		break;
	}
	case 2:
	{
		std::cout << "\nEnter your first polynomial\n";
		int* poly3 = polyinput();
		std::cout << "\nEnter your second polynomial\n";
		int* poly4 = polyinput();
		addpoly(poly3, poly4);
		break;
	}
	case 3:
	{
		std::cout << "\nEnter your polynomial\n";
		int* poly5 = polyinput();
		deripoly(poly5);
		break;
	}
	case 4:
	{
		exit(0);
		break;
	}
	default:
	{
		std::cout << "That was the wrong input, lets try again.\n\n\n";
		continue;
		break;
	}
	}
	}
}
/// <summary>
/// Function for finding the factorial of a number
/// </summary>
/// <param name="n">the number</param>
/// <returns>the factorial of the number</returns>
long long factorial(long long n)
{
	if (n == 1 || n == 0)
	{
		return 1;
	}
	else
	{
		return n * factorial(n - 1);
	}

}
/// <summary>
/// function for the numbers used in simple math
/// </summary>
/// <returns>the numbers</returns>
int* simplemathnumbers()
{
	int numbera;
	int numberb;
	std::cout << "Enter the first number you want to use\n";
	std::cin >> numbera;
	std::cout << "Enter the second number you want to use\n";
	std::cin >> numberb;
	int* numbers = new int[2] {numbera, numberb};
	return numbers;
}
/// <summary>
/// function for addition
/// </summary>
void addition(int* numbers)
{
	int result = numbers[0] + numbers[1];
	std::cout << numbers[0] << " + " << numbers[1] << " = " << result << "\n";
}
/// <summary>
/// function for substraction
/// </summary>
void substraction(int* numbers)
{
	int result = numbers[0] - numbers[1];
	std::cout << numbers[0] << " - " << numbers[1] << " = " << result << "\n";
}
/// <summary>
/// function for multiplication
/// </summary>
void multiplication(int* numbers)
{
	int result = numbers[0] * numbers[1];
	std::cout << numbers[0] << " * " << numbers[1] << " = " << result << "\n";
}
/// <summary>
/// function for division
/// </summary>
void division(int* numbers)
{
	int result = numbers[0] / numbers[1];
	std::cout << numbers[0] << " / " << numbers[1] << " = " << result << "\n";
}
/// <summary>
/// Menu for simple math
/// </summary>
/// <returns></returns>
void mathmenu()
{
	while (true)
	{
		int mathcase;
		std::cout << "\n\nNiiiiiice some simple math! What task do you want to perform?\n";
		std::cout << "[1] Addition\n";
		std::cout << "[2] Substraction\n";
		std::cout << "[3] Multiplication\n";
		std::cout << "[4] Division\n";
		std::cout << "[5] KILL THE PROGRAM\n";
		std::cin >> mathcase;

		switch (mathcase)
		{
		case 1:
		{
			int* numbers = simplemathnumbers();
			addition(numbers);
			break;
		}
		case 2:
		{
			int* numbers = simplemathnumbers();
			substraction(numbers);
			break;
		}
		case 3:
		{
			int* numbers = simplemathnumbers();
			multiplication(numbers);
			break;
		}
		case 4:
		{
			int* numbers = simplemathnumbers();
			division(numbers);
			break;
		}
		case 5:
		{
			exit(0);
			break;
		}
		default:
		{
			std::cout << "That was the wrong input, lets try again.\n\n\n";
			continue;
			break;
		}
		}
	}
}
int main()
{
	while (true)
	{
		int meny;
		std::cout << "\n\nHello, what would you like to do today?\n";
		std::cout << "[1] Polynomial calculations \n";
		std::cout << "[2] Find the factorial\n";
		std::cout << "[3] Just some simple math, thanks\n";
		std::cout << "[4] KILL THE PROGRAM\n";
		std::cin >> meny;

		switch (meny)
		{
		case 1:
			polymenu();
			break;
		case 2:
			long long n;
			long long result;
			std::cout << "\nEnter a positive number\n";
			std::cin >> n;
			result = factorial(n);
			std::cout << "Factorial of " << n << " is " << result << "\n";
			break;
		case 3:
			mathmenu();
			break;
		case 4:
			exit(0);
			break;
		default:
			std::cout << "That was the wrong input, lets try again.\n\n\n";
			continue;
			break;
		}
	}
}