#include <iostream>
#include <cmath>

// Function prototype
template <typename T>
double distance(T x1, T y1, T x2, T y2);

int main() {
    // Test values
    int x1, y1, x2, y2;
    std::cout << "Enter coordinates for point 1 (x1 y1): ";
    std::cin >> x1 >> y1;
    std::cout << "Enter coordinates for point 2 (x2 y2): ";
    std::cin >> x2 >> y2;

    // Call the distance function and display the result
    std::cout << "Distance between the points: " << distance(x1, y1, x2, y2) << std::endl;

    return 0;
}

// Function to calculate the Euclidean distance
template <typename T>
double distance(T x1, T y1, T x2, T y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}