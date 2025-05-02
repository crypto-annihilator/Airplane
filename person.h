#ifndef PERSON
#define PERSON

#include <string>

class Person {
public:
    Person(const std::string& name, const std::string& role);
    void display() const;
    std::string getRole() const;
    std::string getName() const;

private:
    std::string m_name;
    std::string m_role; // "Pilot" or "Passenger"
};

#endif //PERSON
