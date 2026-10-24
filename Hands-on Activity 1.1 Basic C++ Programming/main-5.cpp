#include <iostream>
#include <cmath>

class Triangle {
private:
    double totalAngle, angleA, angleB, angleC;
    double sideA, sideB, sideC;

public:
    Triangle(double A, double B, double C);
    void setAngles(double A, double B, double C);
    bool validateTriangle();

    void setSides(double a, double b, double c);
    double perimeter();
    double area();
    void triangleType();
};

Triangle::Triangle(double A, double B, double C) {
    angleA = A;
    angleB = B;
    angleC = C;
    totalAngle = A + B + C;

    sideA = sideB = sideC = 0;
}

void Triangle::setAngles(double A, double B, double C) {
    angleA = A;
    angleB = B;
    angleC = C;
    totalAngle = A + B + C;
}

bool Triangle::validateTriangle() {
    return (totalAngle == 180 && angleA > 0 && angleB > 0 && angleC > 0);
}

void Triangle::setSides(double a, double b, double c) {
    sideA = a;
    sideB = b;
    sideC = c;
}

double Triangle::perimeter() {
    return sideA + sideB + sideC;
}

double Triangle::area() {
    double s = perimeter() / 2;
    return std::sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
}

void Triangle::triangleType() {
    if (angleA < 90 && angleB < 90 && angleC < 90)
        std::cout << "Triangle is Acute-angled.\n";
    else if (angleA > 90 || angleB > 90 || angleC > 90)
        std::cout << "Triangle is Obtuse-angled.\n";
    else
        std::cout << "Triangle is Others (Right triangle).\n";
}

int main() {

    Triangle set1(40, 30, 110);

    if (set1.validateTriangle()) {
        std::cout << "The shape is a valid triangle.\n";

        // Enter the lengths of the sides
        set1.setSides(5, 6, 7);

        std::cout << "Perimeter: " << set1.perimeter() << std::endl;
        std::cout << "Area: " << set1.area() << std::endl;

        set1.triangleType();
    }
    else {
        std::cout << "The shape is NOT a valid triangle.\n";
    }

    return 0;
}