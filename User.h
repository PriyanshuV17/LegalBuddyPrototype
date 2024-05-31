#ifndef USER_H
#define USER_H

#include "Person.h"

class User : public Person {
private:
    std::string password;

public:
    User(const std::string& name, const std::string& email, const std::string& password);

    bool authenticate(const std::string& password) const;
    void display() const override;
};

#endif

