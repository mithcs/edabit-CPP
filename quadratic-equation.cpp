#include <cmath>

int quadraticEquation(int a, int b, int c) {
    return (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
}
