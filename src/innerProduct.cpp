#include <iostream>
#include <vector>
#include <cmath>

#include "include/utils.hpp"
#include "include/innerProduct.hpp"
#include "include/vector3D.hpp"

// u . v = ||u|| * ||v|| * cons(u,v)
double getInnerProduct(double normA, double normB, double angleDegreesAB) {
    return normA * normB * std::round(std::cos(convertDegreesToRadians(angleDegreesAB)));
}

//u . v = (u1, u2, u3) . (v1, v2, v3) = (u1*v1, u2*v2, u3*v3)
double getInnerProductVectors(Vector3D u, Vector3D v) {
    return (u.x * v.x) + (u.y * v.y) + (u.z * v.y);
}

// ||u|| = sqrt(u . u) = sqrt(x² + y² + z²)
double normalizeVector(Vector3D u) {
    return std::sqrt(getInnerProductVectors(u, u));
}

// (u,v) = arccos(u . v / ||u||*||v|| )
double calculateAngleVectors(double innerProductUV, double normU, double normV) {
    return convertRadiansToDegrees(std::acos((double) innerProductUV / (normU * normV)));
}

// u = a / ||a|| = (x / ||a||, y / ||a||, z = ||a||)
Vector3D getUnitVector(Vector3D a, double normA) {
    Vector3D unitA;

    unitA.x = (double) a.x / normA;
    unitA.y = (double) a.y / normA;
    unitA.z = (double) a.z / normA;

    return unitA;
}

// if u . v = 0 and u and v are perpendicular
bool isPerpendicular(Vector3D u, Vector3D v) {
    return getInnerProductVectors(u, v) == 0 ? true : false;
}

// if ||u|| = 1, u is a unit vector
bool isUnitVector(double normU) {
    return normU == 1 ? true : false;
}

// if a . b = 0 and a . c = 0 and c . a = 0, {a,b,c} is an orthogonal basis
bool isOrthogonalBasis(Vector3D a, Vector3D b, Vector3D c) {
    return isPerpendicular(a, b) &&
        isPerpendicular(a, c) && 
        isPerpendicular(b, c) ? true : false;
}

// if {a,b,c} are an orthogonal basis and unit vectors, {a,b,c} is an orthonormal basis
bool isOrthonormalBasis(Vector3D a, Vector3D b, Vector3D c) {
    bool isUnitVectors = isUnitVector(normalizeVector(a)) && 
        isUnitVector(normalizeVector(b)) && 
        isUnitVector(normalizeVector(c));
    
    return isOrthogonalBasis(a, b, c) && isUnitVectors ? true : false;
}

// proj (v,u) = (u . v) * u
Vector3D getProjectionVector(Vector3D u, double innerProductUV) {
    return u * innerProductUV;
}
