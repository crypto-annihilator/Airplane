#ifndef WEAPON
#define WEAPON

#include <string>

class Weapon {
public:
    Weapon() = default;
    Weapon(const std::string& name, int damage, float range,
        float weight, float fireRate, const std::string& type);
    std::string getName() const;
    int getDamage() const;
    float getRange() const;
    float getWeight() const;
    float getFireRate() const;
    std::string getType() const;

    // Mutator methods
    void setName(const std::string&);
    void setDamage(int);
    void setRange(float);
    void setWeight(float);
    void setFireRate(float);
    void setType(const std::string&);

    // Display weapon information
    void display() const;

private:
    std::string m_name;
    float m_range; // in meters
    float m_weight; // in kilograms
    float m_fireRate; // shots per second
    std::string m_type; // e.g., "Melee", "Ranged"
    int m_damage;
};

#endif //WEAPON
