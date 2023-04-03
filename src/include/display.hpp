#ifndef DISPLAY_H
#define DISPLAY_H

#include "vector3D.hpp" 

void printVector(Vector3D u);

void printInnerProductVectors(char vectorCharU, char vectorCharV, double innerProductUV);

void printNormalizeVector(char vectorCharU, double normU);

void printCalculateAngle(char vectorCharU, char vectorCharV, double angleDegreesUV);

void printInnerProduct(char vectorCharU, char vectorCharV, double angleDegreesUV, double innerProductUV);

void printIsPerpendicular(char vectorCharU, char vectorCharV, bool isPerpendicularUV);

void printIsUnitVector(char vectorCharU, bool isUnitVectorU);

void printGetUnitVector(char vectorCharU, Vector3D unitVectorU);

void printGetProjectionVector(char vectorCharU, Vector3D projectionV);

void printInnerProduct2Vectors(char vectorCharU, char vectorCharV, Vector3D u, Vector3D v);

#endif