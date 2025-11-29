//
// Created by Максим Бондарев on 29/11/25.
//

#ifndef CPPLESSONS_SMARTREFERENCES_H
#define CPPLESSONS_SMARTREFERENCES_H

class SmartReferences {
	public:
	static void info() {
		int *number { new int { 5 }};
		delete number;
		number = nullptr;


	}
};

#endif //CPPLESSONS_SMARTREFERENCES_H