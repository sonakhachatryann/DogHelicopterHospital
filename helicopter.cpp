#include <iostream>
#include "helicopter.h"

//Coordinates class
Coordinates::Coordinates()
	: x_coord(0)
	, y_coord(0)
{}

Coordinates::Coordinates(int _x_coord, int _y_coord) {
	x_coord = _x_coord;
	y_coord = _y_coord;
}

int Coordinates::get_x_coord() const {
	return x_coord;
}

int Coordinates::get_y_coord() const {
	return y_coord;
}

void Coordinates::set_x_coord(int _x_coord) {
	x_coord = _x_coord;
}

void Coordinates::set_y_coord(int _y_coord) {
	y_coord = _y_coord;
}

//Wing class
Wing::Wing()
	: length(0)
	, width(0)
	, weight(0) 
{}

Wing::Wing(int _length, int _width, double _weight) {
	length = _length;
	width = _width;
	weight = _weight;
}

int Wing::get_length() const {
	return length;
}

int Wing::get_width() const {
	return width;
}

double Wing::get_weight() const {
	return weight;
}

void Wing::set_length(int _length) {
	length = _length;
}

void Wing::set_width(int _width) {
	width = _width;
}

void Wing::set_weight(int _weight) {
	weight = _weight;
}

//Helicopter class
Helicopter::Helicopter()
	: pilot()
	, count_of_wings(0)
	, weight(0)
	, power_of_engine(0)
	, quantity_of_fuel(0)
	, speed(0)
	, coords() {
	//Person _pilot;
	//pilot = _pilot;
	wings = new Wing[count_of_wings]{};
}

Helicopter::Helicopter(Person _pilot, Wing* _wings, int _count_of_wings, double _weight, int _power_of_engine, int _quantity_of_fuel, int _speed, Coordinates _coords) {
	pilot = _pilot;
	count_of_wings = _count_of_wings;
	weight = _weight;
	power_of_engine = _power_of_engine;
	quantity_of_fuel = _quantity_of_fuel;
	speed = _speed;
	coords = _coords;
	wings = new Wing[count_of_wings]{};
	wings = _wings;
}

Helicopter::~Helicopter() {
	delete wings;
	std::cout << "The helicopter is destructed!" << std::endl;
}

Person Helicopter::get_pilot() const {
	return pilot;
}

int Helicopter::get_count_of_wings() const {
	return count_of_wings;
}

double Helicopter::get_weight() const {
	return weight;
}
 
int Helicopter::get_power_of_engine() const {
	return power_of_engine;
}

int Helicopter::get_quantity_of_fuel() const {
	return quantity_of_fuel;
}

Coordinates Helicopter::get_coords() const {
	return coords;
}

int Helicopter::get_speed() const {
	return speed;
}

void Helicopter::set_pilot(Person _pilot) {
	pilot.set_name(_pilot.get_name());
	pilot.set_surname(_pilot.get_surname());
	pilot.set_age(_pilot.get_age());
}

void Helicopter::set_count_of_wings(int _count_of_wings) {
	count_of_wings = _count_of_wings;
}

void Helicopter::set_weight(int _weight) {
	weight = _weight;
}

void Helicopter::set_power_of_engine(int _power_of_engine) {
	power_of_engine = _power_of_engine;
}

void Helicopter::set_quantity_of_fuel(int _quantity_of_fuel) {
	quantity_of_fuel = _quantity_of_fuel;
}

void Helicopter::set_coords(Coordinates _coords) {
	coords = _coords;
}

void Helicopter::set_speed(int _speed) {
	speed = _speed;
}

void Helicopter::print() {
	std::cout << "The pilot is ";
	pilot.print();
	std::cout << ". The helicopter has " << count_of_wings << " wings, weighs " << weight << " kilos.";
	std::cout << "The speed is " << speed << ".";
}