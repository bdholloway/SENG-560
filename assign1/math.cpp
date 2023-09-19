#include "math.h"
#include "mathTemplate.h"
#include "conversions.h"


/*
 * Binary Math Operations
 */

std::string Math::binaryAddition(std::string binary1, std::string binary2)
{
	double ans = addition<double>(binaryToDecimal(binary1), binaryToDecimal(binary2));

	return decimalToBinary(ans);
}

std::string Math::binarySubtraction(std::string binary1, std::string binary2)
{
	double ans = subtraction<double>(binaryToDecimal(binary1), binaryToDecimal(binary2));

	return decimalToBinary(ans);
}


std::string Math::binaryDivision(std::string binary1, std::string binary2)
{
	double ans = division<double>(binaryToDecimal(binary1), binaryToDecimal(binary2));

	return decimalToBinary(ans);
}

std::string Math::binaryMultiplication(std::string binary1, std::string binary2)
{
	double ans = multiplication<double>(binaryToDecimal(binary1), binaryToDecimal(binary2));

	return decimalToBinary(ans);
}

/*
 * Octal Math Operations
 */

std::string Math::octalAddition(std::string oct1, std::string oct2)
{
	double ans = addition<double>(octalToDecimal(oct1), octalToDecimal(oct2));

	return decimalToOctal(ans);
}

std::string Math::octalSubtraction(std::string oct1, std::string oct2)
{
	double ans = subtraction<double>(octalToDecimal(oct1), octalToDecimal(oct2));

	return decimalToOctal(ans);
}

std::string Math::octalMultiplication(std::string oct1, std::string oct2)
{
	double ans = multiplication<double>(octalToDecimal(oct1), octalToDecimal(oct2));

	return decimalToOctal(ans);
}

std::string Math::octalDivision(std::string oct1, std::string oct2)
{
	double ans = division(octalToDecimal(oct1), octalToDecimal(oct2));

	return decimalToOctal(ans);
}

/*
 * Hexidecimal Math Operations
 */

std::string Math::hexadecimalAddition(std::string hex1, std::string hex2)
{
	double ans = addition<double>(hexToDecimal(hex1), hexToDecimal(hex2));

    return decimalToHex(ans);
}

std::string Math::hexadecimalSubtraction(std::string hex1, std::string hex2)
{
	double ans = subtraction<double>(hexToDecimal(hex1), hexToDecimal(hex2));

	return decimalToHex(ans);
}

std::string Math::hexadecimalMultiplication(std::string hex1, std::string hex2)
{
	double ans = multiplication<double>(hexToDecimal(hex1), hexToDecimal(hex2));

    return decimalToHex(ans);
}

std::string Math::hexidecimalDivision(std::string hex1, std::string hex2)
{
	double ans = division<double>(hexToDecimal(hex1), hexToDecimal(hex2));

    return decimalToHex(ans);
}
