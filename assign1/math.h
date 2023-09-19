#ifndef MATH_H
#define MATH_H

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>





class Math
{
public:

	std::string binaryAddition(std::string, std::string);
	std::string binarySubtraction(std::string, std::string);
	std::string binaryMultiplication(std::string, std::string);
	std::string binaryDivision(std::string, std::string);

	std::string hexadecimalAddition(std::string, std::string);
	std::string hexadecimalSubtraction(std::string, std::string);
	std::string hexadecimalMultiplication(std::string, std::string);
	std::string hexidecimalDivision(std::string, std::string);

	std::string octalAddition(std::string, std::string);
	std::string octalSubtraction(std::string, std::string);
	std::string octalMultiplication(std::string, std::string);
	std::string octalDivision(std::string, std::string);
private:

};

#endif
