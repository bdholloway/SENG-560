#ifndef CONVERSIONS_H
#define CONVERSIONS_H

#include <iostream>
#include <string>



double binaryToDecimal(std::string bn)
{
	double ans = std::stoul(bn, nullptr, 2);

	return ans;
}

double hexToDecimal(std::string str)
{
	double ans = std::stoul(str, nullptr, 16);

	return ans;
}

double octalToDecimal(std::string str)
{
	double ans = std::stoul(str, nullptr, 8);

	return ans;
}

std::string decimalToBinary(double dec)
{
    if (dec == 0) {
        return "0"; // Special case: decimal 0 is binary 0
    }

    std::string binary = "";
    while (static_cast<int>(dec) > 0) {
        // Append the least significant bit (remainder of division by 2) to the binary string
        binary = std::to_string(static_cast<int>(dec) % 2) + binary;

        // Divide the decimal number by 2
        dec /= 2;
    }

    return binary;

}

std::string decimalToHex(double dec)
{
    std::stringstream ss;
    ss << std::hex << (int)dec;
    return ss.str();
}

std::string decimalToOctal(double dec)
{
    if (dec == 0) {
        return "0"; // Special case: decimal 0 is octal 0
    }

    std::string octal = "";
    while (static_cast<int>(dec) > 0) {
        // Append the least significant 3 bits (remainder of division by 8) to the octal string
        octal = std::to_string(static_cast<int>(dec) % 8) + octal;

        // Divide the decimal number by 8
        dec /= 8;
    }

    return octal;
}

#endif
