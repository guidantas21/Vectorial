#include "include/point3D.hpp"

Point3D::Point3D() : x(0), y(0), z(0) {}

Point3D::Point3D(double x_, double y_, double z_) : x(x_), y(y_), z(z_) {}

Point3D::Point3D(const Point3D& other) : x(other.x), y(other.y), z(other.z) {}

Point3D& Point3D::operator=(const Point3D& other) {
    x = other.x;
    y = other.y;
    z = other.z;

    return *this;
}

Point3D Point3D::operator+(const Point3D& other) const {
    return Point3D(x + other.x, y + other.y, z + other.z);
}

Point3D Point3D::operator-(const Point3D& other) const {
    return Point3D(x - other.x, y - other.y, z - other.z);
}

Point3D Point3D::operator*(double scalar) const {
    return Point3D(x * scalar, y * scalar, z * scalar);
}