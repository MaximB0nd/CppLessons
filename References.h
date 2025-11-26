//
// Created by Максим Бондарев on 26/11/25.
//

#ifndef CPPLESSONS_REFERENCES_H
#define CPPLESSONS_REFERENCES_H

class References {
	void info() {
		const int a { 3 };
		int* ref_a { &a };

		int* const_ref_a { &a };
		const_ref_a = 1;

		const_ref_a { a };
	}
};

#endif //CPPLESSONS_REFERENCES_H