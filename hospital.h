#include <string>
#include "person.h"

class Hospital {
public:
	Hospital();
	Hospital(std::string, std::string, int, int, int, Person*);
	~Hospital();
	std::string get_name() const;
	std::string get_address() const;
	int get_count_of_beds() const;
	int get_count_of_available_beds() const;
	int get_count_of_doctors() const;
	Person* get_doctors() const;
	void set_name(std::string);
	void set_address(std::string);
	void set_count_of_beds(int);
	void set_count_of_available_beds(int);
	void set_count_of_doctors(int);
	void set_doctors(Person*, int);
	void print_hospital();

private:
	std::string name;
	std::string address;
	int count_of_beds;
	int count_of_available_beds;
	int count_of_doctors;
	Person* doctors;
};