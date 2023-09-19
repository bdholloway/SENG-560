#include <string>
#include "mathTest.h"
#include "math.h"


int main()
{
	MathTest tester;

	std::cout << std::endl;
	std::cout << "Decimal Math Tests" << std::endl;
	std::cout << std::endl;

	tester.decimalAdditionTest(5.001, 5, 10);
	tester.decimalAdditionTest(15, -1, 14);

	tester.decimalSubtractionTest(5, 5, 0);
	tester.decimalSubtractionTest(15.5, 3.2, 12.3);

	tester.decimalMultiplicationTest(5, 5, 25);
	tester.decimalMultiplicationTest(33, 1, 33);

	tester.decimalDivisionTest(50, 5, 10);
	tester.decimalDivisionTest(1000, 10, 100);
//	tester.decimalDivisionTest(1000, 0, 100);

	std::cout << std::endl;
	std::cout << "Binary Math Tests" << std::endl;
	std::cout << std::endl;

	tester.binaryAdditionTest("1011", "1000", "10011");
	tester.binaryAdditionTest("1010", "1110", "11000");

	tester.binarySubtractionTest("1011", "1000", "11");
	tester.binarySubtractionTest("1111", "1111", "0");

	tester.binaryDivisionTest("1111", "1111", "1");
	tester.binaryDivisionTest("1111", "1111", "1");

	tester.binaryMultiplicationTest("1111", "1111", "11100001");
	tester.binaryMultiplicationTest("1011", "1101", "10001111");

	std::cout << std::endl;
	std::cout << "Hex Math Tests" << std::endl;
	std::cout << std::endl;

	tester.hexAdditionTest("1c", "2e", "4a");
	tester.hexAdditionTest("5", "5", "a");

	tester.hexSubtractionTest("2a", "1b", "f");
	tester.hexSubtractionTest("1c", "2", "1a");

	tester.hexMultiplicationTest("1c", "2e", "508");
	tester.hexMultiplicationTest("1f", "0", "0");

	tester.hexDivisionTest("1c", "2", "e");
	tester.hexDivisionTest("ff", "6", "2a");

	std::cout << std::endl;
	std::cout << "Octal Math Tests" << std::endl;
	std::cout << std::endl;

	tester.octalAdditionTest("13", "11", "24");
	tester.octalAdditionTest("11", "2", "13");

	tester.octalSubtractionTest("15", "5", "10");
	tester.octalSubtractionTest("11", "2", "7");

	tester.octalMultiplicationTest("6", "3", "22");
	tester.octalMultiplicationTest("7", "3", "25");

	tester.octalDivisionTest("7", "3", "2");
	tester.octalDivisionTest("4", "2", "2");

	return 0;
}
