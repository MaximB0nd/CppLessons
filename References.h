//
// Created by Максим Бондарев on 26/11/25.
//

#ifndef CPPLESSONS_REFERENCES_H
#define CPPLESSONS_REFERENCES_H
#include <iostream>
#include <ostream>

class References {
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
	}
};

#endif //CPPLESSONS_REFERENCES_H