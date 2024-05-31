#include "Lawyer.h"
#include <iostream>

Lawyer::Lawyer(const std::string& name, const std::string& email) : Person(name, email) {}

void Lawyer::display() const {
    Person::display();
    std::cout << "Lawyer Info" << std::endl;
}
