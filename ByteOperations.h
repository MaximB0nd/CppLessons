//
// Created by Максим Бондарев on 25/11/25.
//

#ifndef CPPLESSONS_BYTEOPERATIONS_H
#define CPPLESSONS_BYTEOPERATIONS_H
#include <iostream>

class ByteOperations {
public:
	static void info() {
		int a { 0b0000'0001 };
		int b { 0b0000'0010 };
		int c { 0b0000'0011 };

		int result { 0b0000'0000 };

		result = { a };

		result <<= 2;
		result = result | b;

		result <<= 2;
		result = result | c;

		int mask = 0b0000'0011;
		std::cout << (result & mask) << (result >> 2 & mask) << (result >> 4 & mask) << std::endl;

	}
};

#endif //CPPLESSONS_BYTEOPERATIONS_H