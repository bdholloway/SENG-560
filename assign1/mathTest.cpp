/*
 * Author: Branden Holloway
 * Date: September 2023
 *
 * math.cpp
 *
 * mathTest implimentation file.
 * Performs various mathmatical operations on varying number types.
 *
 */
#include <iostream>
#include <string>
#include <cmath>
#include "math.h"
#include "mathTest.h"
#include "mathTemplate.h"


/*
 * Decimal Math Operations
 */

/**********************************************
** Function: decimalAdditionTest()
** Description: Takes two variables, and a result. Performs a math operation and checks answer for validity.
** Params: double, double, double
**********************************************/
void MathTest::decimalAdditionTest(double var1, double var2, double result)
{

	double answer = addition<double>(var1, var2);
	float delta = .1;

	std::cout << "Expected: " << result << " Actual: " << answer;

	if((answer - result) < delta)
	{
		std::cout << "\033[1;32m [Test Passed]\033[0m\n";
	}
	else
	{
		std::cout << "\033[1;31m [Test Failed]\033[0m\n";
	}
}

/**********************************************
** Function: decimalSubtractionTest()
** Description: Takes two variables, and a result. Performs a math operation and checks answer for validity.
** Params: double, double, double
**********************************************/
void MathTest::decimalSubtractionTest(double var1, double var2, double result)
{
	double answer = subtraction<double>(var1, var2);
	float delta = .1;

	std::cout << "Expected: " << result << " Actual: " << answer;

	if(fabs(answer - result) < delta)
	{
		std::cout << "\033[1;32m [Test Passed]\033[0m\n";
	}
	else
	{
		std::cout << "\033[1;31m [Test Failed]\033[0m\n";
	}
}

/**********************************************
** Function: decimalMultiplicationTest()
** Description: Takes two variables, and a result. Performs a math operation and checks answer for validity.
** Params: double, double, double
**********************************************/
void MathTest::decimalMultiplicationTest(double var1, double var2, double result)
{
	double answer = multiplication<double>(var1, var2);
	float delta = .1;

	std::cout << "Expected: " << result << " Actual: " << answer;

	if((answer - result) < delta)
	{
		std::cout << "\033[1;32m [Test Passed]\033[0m\n";
	}
	else
	{
		std::cout << "\033[1;31m [Test Failed]\033[0m\n";
	}
}

/**********************************************
** Function: decimalDivisionTest()
** Description: Takes two variables, and a result. Performs a math operation and checks answer for validity.
** Params: double, double, double
**********************************************/
void MathTest::decimalDivisionTest(double var1, double var2, double result)
{
	double answer = division<double>(var1, var2);
	float delta = .1;
	std::cout << "Expected: " << result << " Actual: " << answer;

	if((answer - result) < delta)
	{
		std::cout << "\033[1;32m [Test Passed]\033[0m\n";
	}
	else
	{
		std::cout << "\033[1;31m [Test Failed]\033[0m\n";
	}
}

/**********************************************
** Function: decimalDivisionTest()
** Description: Takes two variables, and a result. Performs a math operation and checks answer for validity.
** Params: double, double, double
**********************************************/
void MathTest::decimalPowerTest(double var1, double var2, double result)
{
	double answer = power<double>(var1, var2);
	float delta = .1;
	std::cout << "Expected: " << result << " Actual: " << answer;

	if((answer - result) < delta)
	{
		std::cout << "\033[1;32m [Test Passed]\033[0m\n";
	}
	else
	{
		std::cout << "\033[1;31m [Test Failed]\033[0m\n";
	}
}

/*
 * Binary Math Operations
 */

/**********************************************
** Function: binaryAdditionTest()
** Description: Takes two variables, and a result. Performs a math operation and checks answer for validity.
** Params: string, string, string
**********************************************/
void MathTest::binaryAdditionTest(std::string var1, std::string var2, std::string result)
{
	Math math;
	std::string answer = math.binaryAddition(var1, var2);

	std::cout << "Expected:	" << result << " Actual: " << answer;

	if(answer == result)
	{
		std::cout << "\033[1;32m [Test Passed]\033[0m\n";
	}
	else
	{
		std::cout << "\033[1;31m [Test Failed]\033[0m\n";
	}
}

/**********************************************
** Function: binarySubtractionTest()
** Description: Takes two variables, and a result. Performs a math operation and checks answer for validity.
** Params: string, string, string
**********************************************/
void MathTest::binarySubtractionTest(std::string var1, std::string var2, std::string result)
{

	Math math;
	std::string answer = math.binarySubtraction(var1, var2);

	std::cout << "Expected: " << result << " Actual: " << answer;

	if(answer == result)
	{
		std::cout << "\033[1;32m [Test Passed]\033[0m\n";
	}
	else
	{
		std::cout << "\033[1;31m [Test Failed]\033[0m\n";
	}
}

/**********************************************
** Function: binaryDivisionTest()
** Description: Takes two variables, and a result. Performs a math operation and checks answer for validity.
** Params: string, string, string
**********************************************/
void MathTest::binaryDivisionTest(std::string var1, std::string var2, std::string result)
{

	Math math;
	std::string answer = math.binaryDivision(var1, var2);

	std::cout << "Expected: " << result << " Actual: " << answer;

	if(answer == result)
	{
		std::cout << "\033[1;32m [Test Passed]\033[0m\n";
	}
	else
	{
		std::cout << "\033[1;31m [Test Failed]\033[0m\n";
	}
}

/**********************************************
** Function: hexAdditionTest()
** Description: Takes two variables, and a result. Performs a math operation and checks answer for validity.
** Params: string, string, string
**********************************************/
void MathTest::binaryMultiplicationTest(std::string var1, std::string var2, std::string result)
{

	Math math;
	std::string answer = math.binaryMultiplication(var1, var2);

	std::cout << "Expected: " << result << " Actual: " << answer;

	if(answer == result)
	{
		std::cout << "\033[1;32m [Test Passed]\033[0m\n";
	}
	else
	{
		std::cout << "\033[1;31m [Test Failed]\033[0m\n";
	}
}

/**********************************************
** Function: hexAdditionTest()
** Description: Takes two variables, and a result. Performs a math operation and checks answer for validity.
** Params: string, string, string
**********************************************/
void MathTest::hexAdditionTest(std::string var1, std::string var2, std::string result)
{

	Math math;
	std::string answer = math.hexadecimalAddition(var1, var2);

	std::cout << "Expected: " << result << " Actual: " << answer;

	if(answer == result)
	{
		std::cout << "\033[1;32m [Test Passed]\033[0m\n";
	}
	else
	{
		std::cout << "\033[1;31m [Test Failed]\033[0m\n";
	}
}

/**********************************************
** Function: hexMultiplicationTest()
** Description: Takes two variables, and a result. Performs a math operation and checks answer for validity.
** Params: string, string, string
**********************************************/
void MathTest::hexSubtractionTest(std::string var1, std::string var2, std::string result)
{

	Math math;
	std::string answer = math.hexadecimalSubtraction(var1, var2);

	std::cout << "Expected: " << result << " Actual: " << answer;

	if(answer == result)
	{
		std::cout << "\033[1;32m [Test Passed]\033[0m\n";
	}
	else
	{
		std::cout << "\033[1;31m [Test Failed]\033[0m\n";
	}
}

/**********************************************
** Function: hexMultiplicationTest()
** Description: Takes two variables, and a result. Performs a math operation and checks answer for validity.
** Params: string, string, string
**********************************************/
void MathTest::hexMultiplicationTest(std::string var1, std::string var2, std::string result)
{

	Math math;
	std::string answer = math.hexadecimalMultiplication(var1, var2);

	std::cout << "Expected: " << result << " Actual: " << answer;

	if(answer == result)
	{
		std::cout << "\033[1;32m [Test Passed]\033[0m\n";
	}
	else
	{
		std::cout << "\033[1;31m [Test Failed]\033[0m\n";
	}
}

/**********************************************
** Function: hexDivisionTest()
** Description: Takes two variables, and a result. Performs a math operation and checks answer for validity.
** Params: string, string, string
**********************************************/
void MathTest::hexDivisionTest(std::string var1, std::string var2, std::string result)
{
	Math math;
	std::string answer = math.hexidecimalDivision(var1, var2);

	std::cout << "Expected: " << result << " Actual: " << answer;

	if(answer == result)
	{
		std::cout << "\033[1;32m [Test Passed]\033[0m\n";
	}
	else
	{
		std::cout << "\033[1;31m [Test Failed]\033[0m\n";
	}
}

/**********************************************
** Function: octalAdditionTest()
** Description: Takes two variables, and a result. Performs a math operation and checks answer for validity.
** Params: string, string, string
**********************************************/
void MathTest::octalAdditionTest(std::string var1, std::string var2, std::string result)
{
	Math math;
	std::string answer = math.octalAddition(var1, var2);

	std::cout << "Expected: " << result << " Actual: " << answer;

	if(answer == result)
	{
		std::cout << "\033[1;32m [Test Passed]\033[0m\n";
	}
	else
	{
		std::cout << "\033[1;31m [Test Failed]\033[0m\n";
	}
}

/**********************************************
** Function: octalSubtractionTest()
** Description: Takes two variables, and a result. Performs a math operation and checks answer for validity.
** Params: string, string, string
**********************************************/
void MathTest::octalSubtractionTest(std::string var1, std::string var2, std::string result)
{
	Math math;
	std::string answer = math.octalSubtraction(var1, var2);

	std::cout << "Expected: " << result << " Actual: " << answer;

	if(answer == result)
	{
		std::cout << "\033[1;32m [Test Passed]\033[0m\n";
	}
	else
	{
		std::cout << "\033[1;31m [Test Failed]\033[0m\n";
	}
}

/**********************************************
** Function: octalMultiplicationTest()
** Description: Takes two variables, and a result. Performs a math operation and checks answer for validity.
** Params: string, string, string
**********************************************/
void MathTest::octalMultiplicationTest(std::string var1, std::string var2, std::string result)
{
	Math math;
	std::string answer = math.octalMultiplication(var1, var2);

	std::cout << "Expected: " << result << " Actual: " << answer;

	if(answer == result)
	{
		std::cout << "\033[1;32m [Test Passed]\033[0m\n";
	}
	else
	{
		std::cout << "\033[1;31m [Test Failed]\033[0m\n";
	}
}

/**********************************************
** Function: octalDivisionTest()
** Description: Takes two variables, and a result. Performs a math operation and checks answer for validity.
** Params: string, string, string
**********************************************/
void MathTest::octalDivisionTest(std::string var1, std::string var2, std::string result)
{
	Math math;
	std::string answer = math.octalDivision(var1, var2);

	std::cout << "Expected: " << result << " Actual: " << answer;

	if(answer == result)
	{
		std::cout << "\033[1;32m [Test Passed]\033[0m\n";
	}
	else
	{
		std::cout << "\033[1;31m [Test Failed]\033[0m\n";
	}
}












