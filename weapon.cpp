#include <iostream>

#include "weapon.h"

Weapon::Weapon(const std::string& name,
    int damage, float range, float weight,
    float fireRate, const std::string& type)
  : m_name(name)
    , m_damage(damage)
    , m_range(range)
    , m_weight(weight)
    , m_fireRate(fireRate)
    , m_type(type) {}

std::string Weapon::getName() const { 
  return m_name; 
}

int Weapon::getDamage() const { 
  return m_damage; 
}

float Weapon::getRange() const { 
  return m_range; 
}

float Weapon::getWeight() const {
  return m_weight;
}

float Weapon::getFireRate() const {
  return m_fireRate;
}

std::string Weapon::getType() const {
  return m_type;
}

void Weapon::setName(const std::string& newName) {
  m_name = newName;
}

void Weapon::setDamage(int newDamage) {
  m_damage = newDamage;
}

void Weapon::setRange(float newRange) {
  m_range = newRange;
}

void Weapon::setWeight(float newWeight) {
  m_weight = newWeight;
}

void Weapon::setFireRate(float newFireRate) {
  m_fireRate = newFireRate;
}

void Weapon::setType(const std::string& newType) {
  m_type = newType;
}

void Weapon::display() const {
  std::cout << "Weapon: " << m_name << "\n"
    << "Type: " << m_type << "\n"
    << "Damage: " << m_damage << "\n"
    << "Range: " << m_range << " meters\n"
    << "Weight: " << m_weight << " kg\n"
    << "Fire Rate: " << m_fireRate << " shots/sec\n";
}

