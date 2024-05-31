#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
protected:
    std::string name;
    std::string email;

public:
    Person(const std::string& name, const std::string& email);
    virtual ~Person() = default;

    std::string getName() const;
    std::string getEmail() const;

    virtual void display() const = 0;
};

#endif

