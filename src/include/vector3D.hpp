#ifndef VECTOR3D_H
#define VECTOR3D_H

#include "point3D.hpp"

class Vector3D {
public:
    double x, y, z;

    Vector3D();

    Vector3D(double x_, double y_, double z_);

    Vector3D(const Vector3D& other);

    Vector3D(const Point3D A, const Point3D B);

    Vector3D& operator=(const Vector3D& other);

    Vector3D operator+(const Vector3D& other) const;

    Vector3D operator-(const Vector3D& other) const;

    Vector3D operator*(double scalar) const;
};

#endif