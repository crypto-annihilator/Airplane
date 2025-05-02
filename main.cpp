#include <iostream>
#include <string>

#include "body.h"
#include "wing.h"
#include "airplane.h"
#include "person.h"
#include "weapon.h"

#include "fighter.h"

int main() {
    Body body("Carbon Fiber", 35.5);
    Wing leftWing(17.0, 55.0);
    Wing rightWing(17.0, 55.0);

    Airplane plane("Boeing", "737", 180, body, leftWing, rightWing);

    Person* pilot1 = new Person("John", "Pilot");
    Person* pilot2 = new Person("Emily", "Pilot");
    plane.addPilot(pilot1);
    plane.addPilot(pilot2);

    Person* passenger1 = new Person("Johnson", "Passenger");
    Person* passenger2 = new Person("Bob", "Passenger");
    plane.addPassenger(passenger1);
    plane.addPassenger(passenger2);

    plane.displayStatus();
    plane.refuel(200);
    plane.takeOff();
    plane.displayStatus();
    plane.land();
    plane.displayStatus();

    Weapon sword("Excalibur", 50, 1.5f, 3.0f, 0.0f, "Melee");
    Weapon rifle("AK-47", 35, 300.0f, 4.3f, 10.0f, "Ranged");

    sword.display();
    std::cout << std::endl;
    rifle.display();

    Fighter f( sword);
    f.displayStatus();
    return 0;
}

