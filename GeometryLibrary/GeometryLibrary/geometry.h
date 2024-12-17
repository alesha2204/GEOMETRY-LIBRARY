#ifndef GEOMETRY_H
#define GEOMETRY_H
#include <string>
#include <vector>

namespace Geometry {

    // Функции для расчета площади и периметра квадрата
    double squareArea(double side);
    double squarePerimeter(double side);

    // Функции для расчета площади и периметра круга
    double circleArea(double radius);
    double circlePerimeter(double radius);

    // Функции для расчета площади и периметра треугольника
    double triangleArea(double base, double height);
    double trianglePerimeter(double a, double b, double c);

    std::vector<std::string> listShapes();
}

#endif // GEOMETRY_H