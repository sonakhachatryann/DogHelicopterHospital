#include <iostream>
#include "person.h"

Person::Person()
	: name("")
	, surname("")
	, age(0)
{}

Person::Person(std::string _name, std::string _surname, int _age) {
	name = _name;
	surname = _surname;
	age = _age;
}

std::string Person::get_name() const {
	return name;
}

std::string Person::get_surname() const {
	return surname;
}

int Person::get_age() const {
	return age;
}

void Person::set_name(std::string _name) {
	name = _name;
}

void Person::set_surname(std::string _surname) {
	name = _surname;
}

void Person::set_age(int _age) {
	age = _age;
}

void Person::print() {
	std::cout << name << " " << surname << " " << age << std::endl;
}
