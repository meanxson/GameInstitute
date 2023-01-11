//
// Created by meanx on 09/01/2023.
//
#include <iostream>
#include <cmath>


int factorial(int n) {
    if (n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

char toUpperCase(char ch) {
    return toupper(ch);
}

char toLowerCase(char ch) {
    return tolower(ch);
}

float distance3D(float ux, float uy, float uz, float vx, float vy, float vz) {
    return sqrtf(powf(vx - ux, 2) + powf(vy - uy, 2) + powf(vz - uz, 2));;
}

void calculatorProgram() {
    int answer;
    bool isWork = true;

    while (isWork) {

        std::cout << "1) cos(x), 2) sin(x), 3) tan(x), 4) atan2(y, x), 5) sqrt(x), 6) x^y, 7) ln(x), \n8) "
                     "e^x, 9) |x|, 10) floor(x), 11) ceil(x), 12) Exit.";
        std::cin >> answer;

        float x = 0, y = 0;

        switch (answer) {
            case 1:
                std::cout << "\n Enter x: ";
                std::cin >> x;

                std::cout << "\n cos(x) = " << cosf(x);
                break;

            case 2:
                std::cout << "\n Enter x: ";
                std::cin >> x;

                std::cout << "\n sin(x) = " << sinf(x);
                break;

            case 3:
                std::cout << "\n Enter x: ";
                std::cin >> x;

                std::cout << "\n tan(x) = " << tanf(x);
                break;

            case 4:
                std::cout << "\n Enter y: ";
                std::cin >> y;

                std::cout << "\n Enter x: ";
                std::cin >> x;

                std::cout << "\n tan(x) = " << atan2f(y, x);
                break;

            case 5:
                std::cout << "\n Enter x: ";
                std::cin >> x;

                std::cout << "\n sqrt(x) = " << sqrtf(x);
                break;

            case 6:
                std::cout << "\n Enter x: ";
                std::cin >> x;

                std::cout << "\n Enter y: ";
                std::cin >> y;

                std::cout << "\n x^y = " << powf(x, y);
                break;

            case 7:
                std::cout << "\n Enter x: ";
                std::cin >> x;

                std::cout << "\n tan(x) = " << logf(x);
                break;

            case 8:
                std::cout << "\n Enter x: ";
                std::cin >> x;

                std::cout << "\n e^x = " << expf(x);
                break;

            case 9:
                std::cout << "\n Enter x: ";
                std::cin >> x;

                std::cout << "\n |x| = " << fabsf(x);
                break;

            case 10:
                std::cout << "\n Enter x: ";
                std::cin >> x;

                std::cout << "\n floor(x) = " << floorf(x);
                break;

            case 11:
                std::cout << "\n Enter x: ";
                std::cin >> x;

                std::cout << "\n ceil(x) = " << ceilf(x);
                break;

            case 12:
                isWork = false;
                break;
        }
    }
}

void slotMachine() {

}

void binarySort() {

}

