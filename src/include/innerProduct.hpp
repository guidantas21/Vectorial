#ifndef INNERPRODUCT_H
#define INNERPRODUCT_H

#include "vector3D.hpp"

double getInnerProduct(double normA, double normB, double angleDegreesAB);

double getInnerProductVectors(Vector3D u, Vector3D v);

double normalizeVector(Vector3D u);

double calculateAngleVectors(double innerProductUV, double normU, double normV);

Vector3D getUnitVector(Vector3D a, double normA);

bool isPerpendicular(Vector3D u, Vector3D v);

bool isUnitVector(double normU);

bool isOrthogonalBasis(Vector3D a, Vector3D b, Vector3D c);

bool isOrthonormalBasis(Vector3D a, Vector3D b, Vector3D c);

Vector3D getProjectionVector(Vector3D u, double innerProductUV);

#endif

