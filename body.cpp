#include <iostream>

#include "body.h"

Body::Body(const std::string& material, double length)
          : m_material(material), m_length(length) {}

void Body::display() const {
        std::cout << "Body Material: "
          << m_material << ", Length: "
          << m_length << " m\n";
}
