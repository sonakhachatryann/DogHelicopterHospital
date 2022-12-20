#include <string>

class Person {
public:
	Person();
	Person(std::string, std::string, int);
	std::string get_name() const;
	std::string get_surname() const;
	int get_age() const;
	void set_name(std::string);
	void set_surname(std::string);
	void set_age(int);
	void print();

private:
	std::string name;
	std::string surname;
	int age;
}; 