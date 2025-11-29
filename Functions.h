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

	static void print_collection() {
		int collection[] { 1, 2, 3, 4, 5 };
		int* start { std::begin(collection) };
		int* end { std::end(collection) };
		start; // first
		end; // the next after last
	}

	static void print_collection(int collection[], const size_t size) {
		//collection[1] = 1;
	}

	static void print(int mass1[]); //=
	//static void print(int* mass2); //=
	static void print(int (&mass3)[4]);

	static int* max(int& num1, int& num2) {
		if (num1 > num2) {
			return &num1;
		} else {
			return &num2;
		}
	}

	static int* max(int* num1, int* num2) {
		if (*num1 > *num2) {
			return num1;
		} else {
			return num2;
		}
	}

	static void check_max() {
		int num1 { 3 };
		int num2 { 2 };

		std::cout << *Functions::max(num1, num2) << std::endl;
	}

	static int factorial(int n) {
		if (n == 0) {
			return 1;
		} else {
			return n * factorial(n - 1);
		}
	}

	static void sort(int mass[], size_t start, size_t end) {
		if (start >= end) {
			return;
		}

		size_t current { start };

		for (size_t i { start + 1}; i < end; i++) {
			if (mass[i] < mass[start]) {
				current++;
				swap(mass, current, i);
			}
		}

		swap(mass, start, current);

		if ( start < current ) {
			sort(mass, start, current - 1);
		}

		if (end > current + 1 ) {
			sort(mass, end, current + 1);
		}
	}

	static void swap(int mass[], size_t first, size_t second) {
		auto temp { mass[first] };
		mass[first] = mass[second];
		mass[second] = temp;
	}
};

#endif //CPPLESSONS_FUNCTIONS_H