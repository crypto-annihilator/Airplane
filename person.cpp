#include <iostream>

#include "person.h"

Person::Person(const std::string& name, const std::string& role)
  : m_name(name), m_role(role) {}

void Person::display() const {
  std::cout << m_role << ": " << m_name << std::endl;
}

std::string Person::getRole() const { 
  return m_role; 
}

std::string Person::getName() const {
  return m_name;
}
