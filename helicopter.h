#include <string>
#include "person.h"

class Coordinates {
public:
	Coordinates();
	Coordinates(int, int);
	int get_x_coord() const;
	int get_y_coord() const;
	void set_x_coord(int);
	void set_y_coord(int);

private:
	int x_coord;
	int y_coord;
};

class Wing {
public:
	Wing();
	Wing(int, int, double);
	int get_length() const;
	int get_width() const;
	double get_weight() const;
	void set_length(int);
	void set_width(int);
	void set_weight(int);

private:
	int length;
	int width;
	double weight;
};

class Helicopter {
public:
	Helicopter();
	Helicopter(Person, Wing*, int, double, int, int, int, Coordinates);
	~Helicopter();
	Person get_pilot() const;
	int get_count_of_wings() const;
	double get_weight() const;
	int get_power_of_engine() const;
	int get_quantity_of_fuel() const;
	Coordinates get_coords() const;
	int get_speed() const;
	void set_pilot(Person);
	void set_count_of_wings(int);
	void set_weight(int);
	void set_power_of_engine(int);
	void set_quantity_of_fuel(int);
	void set_coords(Coordinates);
	void set_speed(int);
	void print();

private:
	Person pilot;
	Wing* wings;
	int count_of_wings;
	double weight;
	int power_of_engine;
	int quantity_of_fuel;
	int speed;
	Coordinates coords;
};