#ifndef BODY
#define BODY

class Body {
  public:
    Body() = default;
    Body(const std::string& material, double length);
    void display() const;

  private:
    std::string m_material{"Aluminum"};
    double m_length{30.0};  // metr 
};

#endif // BODY
