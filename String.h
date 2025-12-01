//
// Created by Максим Бондарев on 1/12/25.
//

#ifndef CPPLESSONS_STRING_H
#define CPPLESSONS_STRING_H
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>



class String {
	public:
	static void info() {
		int n;
		std::cin >> n;
		int *mass = new int[n];
		for (int i { 0 }; i < n; i++) {
			mass[i] = rand() % 10;
		}
		for (int i { 0 }; i < n; i++) {
			std::cout << mass[i] << " ";
		}

		delete [] mass;
	};

	static void info_vector() {
		int n;
		std::cin >> n;
		std::vector<int> vect = std::vector<int>(n);
		for (int i { 0 }; i < n; i++) {
			vect[i] = rand() % 10;
		}
		for (int i { 0 }; i < n; i++) {
			std::cout << vect[i] << " ";
		}

		for (int value : vect) {
			std::cout << value << " ";
		}

		int min { *std::min_element(vect.begin(), vect.end()) };
		int max { *std::max_element(vect.begin(), vect.end()) };

		std::cout << max << " ";
		std::cout << min << " ";
	}

	static std::pair<int, int> minmax(std::vector<int> vect) {
		auto [min, max] = std::minmax_element(vect.begin(), vect.end());
		return std::make_pair(*min, *max);
	}

	static std::pair<char, int> most_popular_char(const std::vector<char> &vect) {
		std::map<char, int> char_map;
		for (char c : vect) {
			char_map[c]++;
		}

		std::pair<char, int> max = *std::max_element(
			char_map.begin(),
			char_map.end(),
			[](const std::pair<char, int> &p1, const std::pair<char, int> &p2) {
					return p1.second < p2.second;
			}
		);

		return max;
	}

	static void test_lambda() {
		auto lambla = []() {
			std::cout << "hello from lambda";
		};

		int a { 1 };

		auto capture1 = [a]() {
			std::cout << "hello" << a;
		};

		auto capture2 = [&a]() {
			std::cout << "hello" << a;
		};

		auto capture3 = [=]() {
			std::cout << "hello" << a;
		};

		auto capture4 = [&]() {
			std::cout << "hello" << a;
		};

		auto capture5 = [y = a + 2]() {
			std::cout << "hello" << y;
		};

		auto capture6 = [a]() mutable {
			a++;
			std::cout << "hello" << a;
		};
	}

	static std::vector<int> copy(const std::vector<int> *vect) {
		std::vector<int> result;
		result.reserve(vect->size());
		std::copy(vect->begin(), vect->end(), std::back_inserter(result));
		return result;
	}
};

#endif //CPPLESSONS_STRING_H