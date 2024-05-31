#ifndef LAWYER_H
#define LAWYER_H

#include "Person.h"

class Lawyer : public Person {
public:
    Lawyer(const std::string& name, const std::string& email);

    void display() const override;
};

#endif
