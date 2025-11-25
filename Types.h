//
// Created by Максим Бондарев on 24/11/25.
//

#ifndef CPPLESSONS_TYPES_H
#define CPPLESSONS_TYPES_H
#include <iostream>
#include <ostream>

class Types {
	static void info() {
		unsigned int num1 { -1U };
		signed int num21 { 1 };
		long int num3 { 1L };
		unsigned long int num4 { 1UL };
		unsigned long long num5 { 1ULL };

		int num { 1'123'123 };

		int num16 { 0xFF };
		int num8 { 0312 };
		int num2 { 0b0101101 };

		float num6 { 1.2f };
		float num7 { 1.2e-3 };

		double num9 { 1.2222 };
		long double num10 { 1.222222222222222222l };
		double num11 { 1. };

		long int some_number { 123 };
		std::cout << sizeof(some_number);

		char char1 { 'a' };
		char char2 { 65 };
		wchar_t wchar1 { 65 };
		char8_t char8 { 65 };
		char16_t char16 { 65 };
		char32_t char32 { 65 };

		wchar_t wchar2 { L'A' };
		std::wcout << wchar1;

		char8_t char8t { u8'a' };
		char16_t char16t { u'a' };
		char32_t char32t { U'A' };



	}
};

#endif //CPPLESSONS_TYPES_H