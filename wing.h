#ifndef WING
#define WING

class Wing {
public:
    Wing() = default;
    Wing(double span, double area);
    void display(int index) const;
private:
    double m_span{15.0};    // lenght of wing 
    double m_area{50.0};       
};

#endif //WING
