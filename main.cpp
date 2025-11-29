#include <iostream>
#include "sum.h"
#include "objects.h"

int main(int argc, char* argv[]) {
	for (int i {}; i < argc; ++i) {
		std::cout << *argv[i] << std::endl;
	}

	std::cout << sum(1, 3);
	std::cout << text;
}