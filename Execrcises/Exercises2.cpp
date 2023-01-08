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
    int a[2][3] = {{-5, 2, 8},
                   {1,  0, 0}};

    int b[2][3] = {{1, 0, 2},
                   {0, 3, -6}};

    int c[2][3];
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << c[i][j] << " ";
        }
        std::cout << "\n";
    }
}

void ASCII() {
    for (int i = 33; i < 256; ++i) {
        std::cout << i << ": " << (char) i << " ";
    }
}

void Factorial() {
    long factorial = 1;
    int n;

    std::cout << "Enter a positive integer to compute the factorial of: ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i) factorial *= i;

    std::cout << n << "! = " << factorial;
}

void LinearSearch() {
    int list[] = {7, 3, 32, 2, 55, 34, 6, 13, 29, 22, 11, 9, 1, 5, 42, 39, 8};
    int numberForFind, targetNumber = 0;
    int length = sizeof(list) / sizeof(int);

    std::cout << "List = ";
    for (int i = 0; i < length; ++i) {
        if (i == length - 1) {
            std::cout << list[i];
        } else {
            std::cout << list[i] << ", ";
        }
    }

    std::cout << "\nEnter an integer in the list to search for: ";
    std::cin >> numberForFind;

    int i;
    for (i = 0; i < length; ++i) {
        if (numberForFind == list[i]) {
            targetNumber = list[i];
            break;
        }
    }

    targetNumber == 0 ? std::cout << "Failed" : std::cout << "Item found at index " << "[" << i << "]";
}

void SelectionSort() {
    int length = 10;
    int numbers[length];

    for (int i = 0; i < length; ++i) {
        std::cout << "[" << i << "] = ";
        std::cin >> numbers[i];
    }

    std::cout << "\nUnsorted list: ";
    for (int i = 0; i < length; ++i) {
        std::cout << numbers[i] << ", ";
    }

    std::cout << "\nSorting...";
    for (int step = 0; step < length - 1; step++) {
        int min_idx = step;
        for (int i = step + 1; i < length; i++) {

            // To sort in descending order, change > to < in this line.
            // Select the minimum element in each loop.
            if (numbers[i] < numbers[min_idx])
                min_idx = i;
        }

        std::swap(numbers[min_idx], numbers[step]);
    }

    std::cout << "\nSorted list: ";
    for (int i = 0; i < length; ++i) {
        std::cout << numbers[i] << ", ";
    }
}