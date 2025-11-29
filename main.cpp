#include <iostream>
#include "sum.h"

int main(int argc, char* argv[]) {
	for (int i {}; i < argc; ++i) {
		std::cout << *argv[i] << std::endl;
	}

	std::cout << sum(1, 3);
}