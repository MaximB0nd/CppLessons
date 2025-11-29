//
// Created by Максим Бондарев on 29/11/25.
//

#ifndef CPPLESSONS_SMARTREFERENCES_H
#define CPPLESSONS_SMARTREFERENCES_H

#include <memory>

class SmartReferences {
	public:
	static void info() {
		int *number { new int { 5 }};
		delete number;
		number = nullptr;

		int mass[] { new int[] {1, 3, 4}};

		std::unique_ptr<int> value { std::make_unique<int>(5)};
		int *pointer { value.get() };
		value.reset(std::make_unique<int>(*pointer).get() );

		std::shared_ptr<int> shared_ptr { std::make_shared<int>(123) };
		std::shared_ptr<int> shared_ptr2 { shared_ptr };


	}
};

#endif //CPPLESSONS_SMARTREFERENCES_H