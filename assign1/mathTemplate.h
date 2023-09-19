#ifndef MATHTEMPLATE_H
#define MATHTEMPLATE_H


#include <iostream>

template <typename T>
T addition(T val_1, T val_2)
{
    return val_1 + val_2;
}

template <typename T>
T subtraction(T val_1, T val_2)
{
    return val_1 - val_2;
}

template <typename T>
T multiplication(T val_1, T val_2)
{
    return val_1 * val_2;
}

template <typename T>
T division(T val_1, T val_2)
{
	if(val_2 == 0)
	{
		throw std::invalid_argument("Divide by 0 ERROR");
	}
    return val_1 / val_2;
}

#endif
