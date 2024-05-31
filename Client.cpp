#include "Client.h"
#include <iostream>

Client::Client(const std::string& name, const std::string& email) : Person(name, email) {}

void Client::display() const {
    Person::display();
    std::cout << "Client Info" << std::endl;
}
