//
// Created by Максим Бондарев on 27/11/25.
//

#ifndef CPPLESSONS_FUNCTIONS_H
#define CPPLESSONS_FUNCTIONS_H
#include <iostream>
#include <ostream>

int n { 10 };

class Functions {
	public:

	void some_function();

	static void info() {
		int n {10};
		std::cout << "n=" << ::n << std::endl;
		{
			int n {20};
			std::cout << "n=" << ::n << std::endl;
		}

		clicker();
		clicker();

		std::cout << "n=" << clicker() << std::endl;
	}

	static int clicker() {
		static int n { 0 };

		n++;

		return n;
	}

	static void print(const int n) {
		std::cout << "n=" << n << std::endl;
	}

	static void print(const int &n) {
		std::cout << "n=" << n << std::endl;
	}

	static void increment(int* number) {
		(*number)++;
	}

	static void increment(const int* number) {
		int num { 12 };
		number = { &num };
	}

	static void decrement(int* const number) {
		(*number)++;
	}
};

#endif //CPPLESSONS_FUNCTIONS_H