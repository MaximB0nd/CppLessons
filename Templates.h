//
// Created by Максим Бондарев on 3/12/25.
//

#ifndef CPPLESSONS_TEMPLATES_H
#define CPPLESSONS_TEMPLATES_H

#include <iostream>

class Templates {

	public:
	static void info() {
	}


	template <typename T>
	T max(T a, T b) {
		return a > b ? a : b;
	}



};

template <typename T1, typename T2>
class Pair {

private:

	T1 first;
	T2 second;

public:
	Pair(const T1 &one, const T2 &two) : first(one), second(two) {}

	T1 getFirst() const { return first; }
	T2 getSecond() const { return second; }

	void setFirst(const T1& f) { first = f; }
	void setSecond(const T2& s) { second = s; }

	void print() const {
		std::cout << "(" << first << ", " << second << ")" << std::endl;
	}
};

template <typename T>
class Stack {
	private:
	std::vector<T> data;

	public:
	Stack() : data() {}

	void push(const T& t) {
		data.push_back(t);
	}

	void pop() {
		data.pop_back();
	}

	T top() {
		return data[0];
	}

	bool is_empty() {
		return data.size() == 0;
	}

	size_t size() {
		return data.size();
	}
};

template <template <typename T1> class Stack, typename T2>
class Container {
	private:
	Stack<T2> stack;

	public:
	Container() : stack() {}
};

template <typename T1, size_t size = 10>
class FixedMass {
	private:

	T1 data[size];

	public:
	FixedMass() : data(new T1[size]) {}
};

template <typename T>
	class TestClass1 {

};

template <template <typename T1> class Stack>
class TestClass2 {

};

template <template <typename> class Stack>
class TestClass3 {

};

#endif //CPPLESSONS_TEMPLATES_H