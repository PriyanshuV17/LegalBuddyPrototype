#ifndef CLIENT_H
#define CLIENT_H

#include "Person.h"

class Client : public Person {
public:
    Client(const std::string& name, const std::string& email);

    void display() const override;
};

#endif
