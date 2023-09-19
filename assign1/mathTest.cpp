#include <iostream>
#include <string>
#include <cmath>
#include "math.h"
#include "mathTest.h"
#include "mathTemplate.h"


/*
 * Decimal Math Operations
 */
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

/*
 * Binary Math Operations
 */

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












