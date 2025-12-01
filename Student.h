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

	Student(Student&& other) noexcept : name(other.name), age(other.age), marks(other.marks) {
		this->data = other.data;
		this->name = other.name;
		this->age = other.age;
		this->marks = other.marks;
		this->data = new char[10];

		delete [] other.data;
		other.data = nullptr;
		other.marks.clear();
		other.name.clear();
	}

	Student& operator=(Student&& student) {
		delete [] data;
		name = student.name;
		age = student.age;
		marks = student.marks;
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