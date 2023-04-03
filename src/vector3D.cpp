#include <vector>
#include <cmath>

#include "include/vector3D.hpp"
#include "include/point3D.hpp"

Vector3D::Vector3D() : x(0), y(0), z(0) {}

Vector3D::Vector3D(double x_, double y_, double z_) : x(x_), y(y_), z(z_) {}

Vector3D::Vector3D(const Vector3D& other) : x(other.x), y(other.y), z(other.z) {}

Vector3D::Vector3D(const Point3D A, const Point3D B) : x(B.x - A.x), y(B.y - A.y), z(B.z - A.z) {}

Vector3D& Vector3D::operator=(const Vector3D& other) {
    x = other.x;
    y = other.y;
    z = other.z;

    return *this;
}

Vector3D Vector3D::operator+(const Vector3D& other) const {
    return Vector3D(x + other.x, y + other.y, z + other.z);
}

Vector3D Vector3D::operator-(const Vector3D& other) const {
    return Vector3D(x - other.x, y - other.y, z - other.z);
}

Vector3D Vector3D::operator*(double scalar) const {
    return Vector3D(x * scalar, y * scalar, z * scalar);
}
