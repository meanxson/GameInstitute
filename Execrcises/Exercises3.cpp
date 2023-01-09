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

char toUpperCase(char ch){
    return toupper(ch);
}

char toLowerCase(char ch){
    return tolower(ch);
}

float distance3D(float ux, float uy, float uz, float vx, float vy, float vz) {
    return sqrtf(powf(vx - ux, 2) + powf(vy - uy, 2) + powf(vz - uz, 2));;
}

