//
// Created by Максим Бондарев on 1/12/25.
//

#ifndef CPPLESSONS_STUDENT_H
#define CPPLESSONS_STUDENT_H
#include <optional>
#include <string>
#include <vector>

class Student {
private:
	std::string name;
	int age;
	std::vector<int> marks;
	char *data;

public:
	Student(std::string& name, int age) : name(name) {
		this->age = age;
		this->data = new char[10];
	}

	Student(const Student& other) noexcept :
		name(other.name),
		age(other.age),
		marks(other.marks) {
		if (other.data) {
			data = new char[10];
		} else {
			data = nullptr;
		}
	}

	Student& operator=(const Student& other) {
		if (this != &other) {
			delete [] data;
			name = other.name;
			age = other.age;
			marks = other.marks;
			data = new char[10];
			return *this;
		}
		return *this;
	}

	Student(Student&& other) noexcept : name(other.name), age(other.age), marks(other.marks) {
        delete [] other.data;
		other.data = nullptr;
		data = new char[10];
	}

	Student& operator=(Student&& other) noexcept {
		if (this != &other) {
			name = other.name;
			age = other.age;
			marks = other.marks;
			delete [] data;
			other.data = nullptr;
			data = new char [10];
		}

		return *this;
	}

	void add_mark(const int mark) {
		marks.push_back(mark);
	}

	std::optional<int> max_mark()  {
		if (marks.empty()) {
			return std::nullopt;
		}

		return *std::max_element(marks.begin(), marks.end());
	}

	std::string get_name() { return name; }
	const std::vector<int> &get_marks() const { return marks; }
	int get_age() const { return age; }

	~Student() {
		delete [] data;
		data = nullptr;
	}





};

#endif //CPPLESSONS_STUDENT_H