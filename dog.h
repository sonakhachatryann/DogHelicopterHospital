#include <string>
#include "person.h"

class Dog {
public:
	Dog();
	Dog(std::string, Person, std::string, int, int, int, int);
	std::string get_name() const;
	std::string get_breed() const;
	int get_age() const;
	double get_weight() const;
	int get_quantity_of_food_in_stomach() const;
	int get_energy() const;
	Person get_owner() const;
	void set_name(std::string);
	void set_breed(std::string);
	void set_age(int);
	void set_weight(double);
	void set_quantity_of_food_in_stomach(int);
	void set_energy(int);
	void set_owner(Person);
	void print() const;
	void is_barking() const;
	void is_full() const;
	void is_eating(int);
	bool is_sleeping() const;
	bool wants_to_sleep() const;

private:
	std::string name;
	Person owner;
	std::string breed;
	int age;
	double weight;
	int quantity_of_food_in_stomach;
	int energy;
};
