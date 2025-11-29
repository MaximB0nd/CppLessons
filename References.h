//
// Created by Максим Бондарев on 26/11/25.
//

#ifndef CPPLESSONS_REFERENCES_H
#define CPPLESSONS_REFERENCES_H
#include <iostream>
#include <ostream>

using std::cout;
using action = int(*)(int, int);

class References {
private:

	static void hello() {
		cout << "hello" << std::endl;
	}

	static void bye() {
		cout << "bye" << std::endl;
	}

	static int operation(action oper, const int a, int const b) {
		return oper(a, b);
	}

	static int minus(int a, int b) {
		return a - b;
	}

	static int plus(int a, int b) {
		return a + b;
	}

	static void testFunctionReferences() {
		void (*message)() { nullptr };
		{
			auto* message { hello };
		}
		message=hello;
		(*message)();
		message=bye;
		message();

		operation(plus, 1, 2);
		operation(minus, 2, 3);
	}

public:

	static void info() {
		int a { 3 };
		int& ref_value_a { a };
		const int& const_ref_value_a { a };

		int* reference_a { &a };
		int* null_ref { nullptr };
		int* const_reference_a { &a };
		*reference_a = 10;

		int *& ref_on_ref_value {reference_a};

		reference_a++;
		reference_a--;

		++*reference_a;
		--*reference_a;

		const int const_a { 5 };
		const int const_b { 6 };

		const int* const_ref { &const_a };
		const_ref = { &const_b };

		int* const const_usable_ref { &a };
		*const_usable_ref = 5;

		const int* const unchangeble_ref { &a };

		int nums[] {1, 2, 3, 4, 5};
		*(nums + 1) = 2;

		char text[] { "hello" };
		char* ref_text { text };

		char copy_char { *text };
		const char title[] { "some text "};
		const char* copy_title { title };
		//*copy_title = 'a';

		char* char_mass[] { "C++", "Java", "Swift" };

		void (*mass_functions[3]) () { testFunctionReferences, hello, bye };
		for (size_t i { 0 }; i < std::size(mass_functions); i++) {
			mass_functions[i]();
		}
	}
};

#endif //CPPLESSONS_REFERENCES_H