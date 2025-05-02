#ifndef AIRPLANE
#define AIRPLANE

#include "body.h"
#include "wing.h"
#include "person.h"

#include <string>
#include <vector>

class Airplane {
 
public:
    Airplane() = default;
    Airplane(const std::string& name, const std::string& model, int seatCount,
            const Body& body, const Wing& leftWing, const Wing& rightWing);
    void refuel(double liters);
    void takeOff();
    void land();
    void displayStatus() const;
    void addPilot(Person* pilot);
    void addPassenger(Person* passenger);

private:
    Body m_body;
    Wing m_wing[2];

    std::vector<Person*> m_pilots;
    std::vector<Person*> m_passengers;

    double m_fuelLevel;
    std::string m_name;
    std::string m_model;
    int m_seatCount;
    bool m_isFlying;
};

#endif //AIRPLANE
