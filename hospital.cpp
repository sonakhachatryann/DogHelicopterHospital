#include <iostream>
#include <string>
#include "hospital.h"

Hospital::Hospital()
	: name("")
	, address("")
	, count_of_beds(0)
	, count_of_available_beds(0)
	, count_of_doctors(0) {
	doctors = new Person[count_of_doctors]{};
}

Hospital::Hospital(std::string _name, std::string _address, int _count_of_beds, int _count_of_available_beds, int _count_of_doctors, Person* _doctors) {
	name = _name;
	address = _address;
	count_of_beds = _count_of_beds;
	count_of_available_beds = _count_of_available_beds;
	count_of_doctors = _count_of_doctors;
	_doctors = new Person[count_of_doctors]{};
}

Hospital::~Hospital() {
	delete[] doctors;
}

std::string Hospital::get_name() const {
	return name;
}

std::string Hospital::get_address() const {
	return address;
}

int Hospital::get_count_of_beds() const {
	return count_of_beds;
}

int Hospital::get_count_of_available_beds() const {
	return count_of_available_beds;
}

int Hospital::get_count_of_doctors() const {
	return count_of_doctors;
}

Person* Hospital::get_doctors() const {
	return doctors;
	
}

void Hospital::set_name(std::string _name) {
	name = _name;
}

void Hospital::set_address(std::string _address) {
	address = _address;
}

void Hospital::set_count_of_beds(int _count_of_beds) {
	count_of_beds = _count_of_beds;
}

void Hospital::set_count_of_available_beds(int _count_of_available_beds) {
	count_of_available_beds = _count_of_available_beds;
}

void Hospital::set_count_of_doctors(int _count_of_doctors) {
	count_of_doctors = _count_of_doctors;
}

void Hospital::set_doctors(Person* _doctors, int _count_of_doctors) {
	doctors = new Person[_count_of_doctors]{};
	doctors = _doctors;
}

void Hospital::print_hospital() {
	std::cout << "The hospital name is " << name << ". The address is " << address << "." << std::endl;
}