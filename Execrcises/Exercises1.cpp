//
// Created by meanx on 04/01/2023.
//

#include <cmath>
#include "iostream"

void ArithmeticOperators() {
    float a, b;

    std::cout << "Enter a real number n1: ";
    std::cin >> a;

    std::cout << "Enter a real number n2: ";
    std::cin >> b;

    std::cout << a << "+" << b << "=" << a + b << "\n";
    std::cout << a << "-" << b << "=" << a - b << "\n";
    std::cout << a << "*" << b << "=" << a * b << "\n";
    std::cout << a << "/" << b << "=" << a / b << "\n";
}

void Cube() {
    float n1;

    std::cout << "Enter a number:";
    std::cin >> n1;

    std::cout << n1 << "^3 = " << std::pow(n1, 3);
}

void Circumference() {
    const float PI = 3.14;
    float radius;

    std::cout << "Enter the radius of a circle: ";
    std::cin >> radius;

    float area = PI * std::pow(radius, 2);
    float circumference = 2 * PI * radius;

    std::cout << "The area A of a circle with radius " << radius << "=" << area << "\n";
    std::cout << "The circumference C of a circle with radius  " << radius << "=" << circumference;
}