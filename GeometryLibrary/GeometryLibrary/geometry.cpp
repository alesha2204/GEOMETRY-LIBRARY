#include "geometry.h"
#include <cmath>

const double PI = 3.141592653589793;

namespace Geometry {

    double squareArea(double side) {
        return side * side;
    }

    double squarePerimeter(double side) {
        return 4 * side;
    }

    double circleArea(double radius) {
        return PI * radius * radius;
    }

    double circlePerimeter(double radius) {
        return 2 * PI * radius;
    }

    double triangleArea(double base, double height) {
        return 0.5 * base * height;
    }

    double trianglePerimeter(double a, double b, double c) {
        return a + b + c;
    }

    std::vector<std::string> listShapes() {
        return { "Square", "Circle", "Triangle" };
    }

}