#include "User.h"
#include <iostream>

User::User(const std::string& name, const std::string& email, const std::string& password)
    : Person(name, email), password(password) {}

bool User::authenticate(const std::string& password) const {
    return this->password == password;
}

void User::display() const {
    Person::display();
    std::cout << "User authenticated" << std::endl;
}

