#include <iostream>
#include <string>
#include <vector>

#include "airplane.h"

Airplane::Airplane(const std::string& name, const std::string& model, int seatCount,
    const Body& body, const Wing& leftWing, const Wing& rightWing)
  : m_name(name)
  , m_model(model)
  , m_seatCount(seatCount)
  , m_fuelLevel(0.0)
  , m_isFlying(false)
  , m_body(body) 
{
  m_wing[0] = leftWing;
  m_wing[1] = rightWing;
}

void Airplane::refuel(double liters) {
  if (liters > 0) {
    m_fuelLevel += liters;
    std::cout << "Refueled " << liters 
              << " liters. Current fuel: "
              << m_fuelLevel << " liters.\n";
  } else {
    std::cout << "Invalid fuel amount.\n";  }
}

void Airplane::takeOff() {
  if (m_isFlying) {
    std::cout << "Airplane is already flying.\n";
  } else if (m_fuelLevel < 100.0) {
    std::cout << "Not enough fuel to take off.\n";
  } else {
    m_isFlying = true;
    m_fuelLevel -= 100.0;
    std::cout << "Airplane took off.\n";
  }
}

void Airplane::land() {
  if (!m_isFlying) {
    std::cout << "Airplane is already on the ground.\n";
  } else {
    m_isFlying = false;
    std::cout << "Airplane landed successfully.\n";
  }
}

void Airplane::displayStatus() const {
  std::cout << "\n--- Airplane Info ---\n";
  std::cout << "Name: " << m_name << "\n"
    << "Model: " << m_model << "\n"
    << "Seats: " << m_seatCount << "\n"
    << "Fuel Level: " << m_fuelLevel << " liters\n"
    << "Status: " << (m_isFlying ? "In the air" : "On the ground") << "\n";
  m_body.display(); 
  for (int i = 0; i < 2; ++i) {
    m_wing[i].display(i);
  }
  std::cout << "\nPilots:\n";
  for (const auto& pilot : m_pilots) {
    if (pilot) {
      pilot->display();
    }
  }

  std::cout << "\nPassengers (" << m_passengers.size() << "):\n";
  for (const auto& passenger : m_passengers) {
    if (passenger) {
      passenger->display();
    }
  }  std::cout << "---------------------------\n";
}

void Airplane::addPilot(Person* pilot) {
  if (pilot->getRole() == "Pilot") {
    m_pilots.push_back(pilot);
  } else {
    std::cout << "Only individuals with role 'Pilot' can be added as pilots.\n";
  }
}

void Airplane::addPassenger(Person* passenger) {
  if (passenger && passenger->getRole() == "Passenger") {
    if (m_passengers.size() < static_cast<size_t>(m_seatCount)) {
      m_passengers.push_back(passenger);
    } else {
      std::cout << "No available seats for additional passengers.\n";
    }
  } else {
    std::cout << "Only individuals with role 'Passenger' can be added as passengers.\n";
  }
}

