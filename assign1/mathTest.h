
#ifndef MATHTEST_H
#define MATHTEST_H


class MathTest
{
public:


	void decimalAdditionTest(double, double, double);
	void decimalSubtractionTest(double, double, double);
	void decimalMultiplicationTest(double, double, double);
	void decimalDivisionTest(double, double, double);

	void binaryAdditionTest(std::string, std::string, std::string);
	void binarySubtractionTest(std::string, std::string, std::string);
	void binaryDivisionTest(std::string, std::string, std::string);
	void binaryMultiplicationTest(std::string, std::string, std::string);

	void hexAdditionTest(std::string, std::string, std::string);
	void hexSubtractionTest(std::string, std::string, std::string);
	void hexDivisionTest(std::string, std::string, std::string);
	void hexMultiplicationTest(std::string, std::string, std::string);

	void octalAdditionTest(std::string, std::string, std::string);
	void octalSubtractionTest(std::string, std::string, std::string);
	void octalDivisionTest(std::string, std::string, std::string);
	void octalMultiplicationTest(std::string, std::string, std::string);

private:
};

#endif
