//
// Created by Максим Бондарев on 26/11/25.
//

#ifndef CPPLESSONS_SWITCHCASE_H
#define CPPLESSONS_SWITCHCASE_H
#include <iostream>
#include <ostream>

class SwitchCase {
	public:
	void info() {
		int a { 3 };

		switch (int b { a*2 }; a) {
			case 3: std::cout << "3" << std::endl; break;
			case 2: std::cout << "2" << std::endl; break;
			case 1: std::cout << "1" << std::endl; break;
		}
	}
};

#endif //CPPLESSONS_SWITCHCASE_H