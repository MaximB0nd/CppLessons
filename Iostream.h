//
// Created by Максим Бондарев on 25/11/25.
//

#ifndef CPPLESSONS_IOSTREAM_H
#define CPPLESSONS_IOSTREAM_H

#include <iostream>

using std::cin;
using std::cout;
using ullong = unsigned long long;
typedef unsigned long int ulint;

class Iostream {
	void info() {

		ullong a;
		cin >> a;
		cout << a;

		int b { 5 };
		ullong c { static_cast<ullong>(b) };
		c = { (ullong)b };

	}
};

#endif //CPPLESSONS_IOSTREAM_H