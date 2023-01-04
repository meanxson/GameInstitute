//
// Created by meanx on 05/01/2023.
//
#include <iostream>

void Navigator() {
    float x = 0, y = 0;
    char answer;
    bool isWork = true;

    while (isWork) {
        std::cout << "Current Position = (" << x << ", " << y << ")\n";
        std::cout << "Move (N)orth, E(ast), (S)outh, (W)est, (Q)uit?";
        std::cin >> answer;

        switch (answer) {
            case 'n':
                y++;
                break;
            case 'e':
                x++;
                break;
            case 's':
                y--;
                break;
            case 'w':
                x--;
                break;
            case 'q':
                isWork = false;
                break;
            default:

                break;
        }
    }
}

void Average() {
    int number;

    std::cout << "Enter the number of values to average: ";
    std::cin >> number;

    int arrays[number];
    for (int i = 0; i < number; ++i) {
        std::cout << "[" << i << "]" << " = ";
        std::cin >> arrays[i];
    }

    int sum = 0;
    for (int i = 0; i < number; ++i)
        sum += arrays[i];

    int avg = sum / number;
    std::cout << "Average = " << avg;
}

void MatrixAddition() {

}

void ASCII() {
    for (int i = 33; i < 256; ++i) {
        std::cout << i << ": " << (char) i << " ";
    }
}