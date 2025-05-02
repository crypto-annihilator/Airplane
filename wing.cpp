#include <iostream>

#include "wing.h"

Wing::Wing(double span, double area)
  : m_span(span), m_area(area) {}

void Wing::display(int index) const {
   std::cout << "Wing #" << index + 1 << " — Span: " 
            << m_span << " m, Area: " << m_area << " m²\n";
}
