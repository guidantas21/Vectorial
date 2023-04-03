#ifndef POINT3D_H
#define POINT3D_H

class Point3D {
public:
    double x, y, z;

    Point3D();
    
    Point3D(double x_, double y_, double z_);

    Point3D(const Point3D &other);

    Point3D& operator=(const Point3D& other);

    Point3D operator+(const Point3D& other) const;

    Point3D operator-(const Point3D& other) const;

    Point3D operator*(double scalar) const;
};

#endif