#define RECTANGLE_H

class Rectangle {
private:
    double width;
    double height;

public:
    Rectangle();
    Rectangle(double w, double h);
    void setwh(double w, double h);
    double getw() const;
    double geth() const;
    double getArea() const;
    double getPerimeter() const;
};