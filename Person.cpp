#include "Person.h"
#include <iostream>

Person::Person(const std::string& name, const std::string& email) : name(name), email(email) {}

std::string Person::getName() const { return name; }

std::string Person::getEmail() const { return email; }

void Person::display() const {
    std::cout << "Name: " << name << ", Email: " << email << std::endl;
}
