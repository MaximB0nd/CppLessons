#include <iostream>
#include "Functions.h"

int main(int argc, char* argv[]) {
	for (int i {}; i < argc; ++i) {
		std::cout << *argv[i] << std::endl;
	}
}