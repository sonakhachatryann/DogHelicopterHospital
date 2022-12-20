#include <iostream>
#include "dog.h"

Dog::Dog()
	: age(0)
	, weight(0)
	, quantity_of_food_in_stomach(0)
	, energy(0)
{
	std::cout << "A dog of unknown breed was born!" << std::endl;
}

Dog::Dog(std::string new_name, Person new_owner, std::string new_breed, int new_age, int new_weight, int new_quant_of_food, int new_energy) {
	name = new_name;
	owner = new_owner;
	breed = new_breed;
	age = new_age;
	weight = new_weight;
	quantity_of_food_in_stomach = new_quant_of_food;
	energy = new_energy;
}

std::string Dog::get_name() const {
	return name;
}

std::string Dog::get_breed() const {
	return breed;
}

int Dog::get_age() const {
	return age;
}

double Dog::get_weight() const {
	return weight;
}

int Dog::get_quantity_of_food_in_stomach() const {
	return quantity_of_food_in_stomach;
}

int Dog::get_energy() const {
	return energy;
}

Person Dog::get_owner() const {
	return owner;
}

void Dog::set_name(std::string new_name) {
	name = new_name;
}

void Dog::set_breed(std::string new_breed) {
	breed = new_breed;
}

void Dog::set_age(int new_age) {
	age = new_age;
}

void Dog::set_weight(double new_weight) {
	weight = new_weight;
}

void Dog::set_quantity_of_food_in_stomach(int new_quantity) {
	quantity_of_food_in_stomach = new_quantity;
}

void Dog::set_energy(int new_energy) {
	energy = new_energy;
}

void Dog::set_owner(Person _owner) {
	owner = _owner;
}

void Dog::print() const {
	std::cout << "The dog's name is " << name << ", it's breed is " << breed;
	std::cout << ", it's " << age << " years old, and it weights " << weight << "kilos." << std::endl;
}

void Dog::is_barking() const {
	std::cout << "The dog is barking!" << std::endl;
}

void Dog::is_full() const {
	if (quantity_of_food_in_stomach > 10) {
		std::cout << "The dog is sated!" << std::endl;
	}
	else {
		std::cout << "The dog is not sated." << std::endl;
	}
}

void Dog::is_eating(int quantity_of_food) {
	std::cout << "The dog is now eating." << std::endl;
	quantity_of_food_in_stomach += quantity_of_food;
}

bool Dog::is_sleeping() const {
	if (energy <= 0) {
		return true;
	}
	return false;
}

bool Dog::wants_to_sleep() const {
	if (energy < 5) {
		return true;
	}
	return false;
}