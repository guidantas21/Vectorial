#include <iostream>

#include "include/vector3D.hpp"
#include "include/innerProduct.hpp"

void printVector(Vector3D u) {
    std::cout << "(" << u.x  << ", " << u.y << ", " << u.z << ")\n";
}

void printInnerProductVectors(char vectorCharU, char vectorCharV, double innerProductUV) {
    std::cout << vectorCharU << " . "<< vectorCharV << " = " << innerProductUV << "\n";
}

void printNormalizeVector(char vectorCharU, double normU) {
    std::cout << "||" << vectorCharU << "|| = " << normU << "\n";
}

void printCalculateAngle(char vectorCharU, char vectorCharV, double angleDegreesUV) {
    std::cout << "Angle (" << vectorCharU << "," << vectorCharV  << ") = " << angleDegreesUV << "°\n";
}

void printInnerProduct(char vectorCharU, char vectorCharV, double angleDegreesUV, double innerProductUV) {
    std::cout << vectorCharU << " . " << vectorCharV << " = ||" << vectorCharU << "|| * ||";
    std::cout << "|| * cos("<< vectorCharU << "," << vectorCharV  << ") = " << innerProductUV << "\n";
}

void printIsPerpendicular(char vectorCharU, char vectorCharV, bool isPerpendicularUV) {
    std::cout << "("<< vectorCharU << "," << vectorCharV;
    std::cout << ") perpendicular: " << (isPerpendicularUV ? "true" : "false") << "\n";
}

void printIsUnitVector(char vectorCharU, bool isUnitVectorU) {
    std::cout << vectorCharU << " unit vector: " << (isUnitVectorU ? "true" : "false") << "\n";
}

void printGetUnitVector(char vectorCharU, Vector3D unitVectorU) {
    std::cout << "unit " << vectorCharU << " = ";
    printVector(unitVectorU);
}

void printGetProjectionVector(char vectorCharU, Vector3D projectionV) {
    std::cout << "proj " <<vectorCharU << " = ";
    printVector(projectionV);
}

void printInnerProduct2Vectors(char vectorCharU, char vectorCharV, Vector3D u, Vector3D v) {
    Vector3D unitVectorU, unitVectorV, projectionV;
    double normU, normV, innerProductUV, angleDegreesUV;
    bool isPerpendicularUV, isUnitVectorU, isUnitVectorV;

    innerProductUV = getInnerProductVectors(u,v);
    normU = normalizeVector(u);
    normV = normalizeVector(v);
    angleDegreesUV = calculateAngleVectors(innerProductUV, normU, normV);
    isPerpendicularUV = isPerpendicular(u, v);
    isUnitVectorU = isUnitVector(normU);
    isUnitVectorV = isUnitVector(normV);
    unitVectorU = getProjectionVector(u, innerProductUV);
    unitVectorV = getProjectionVector(v, innerProductUV);
    projectionV = getProjectionVector(u, innerProductUV);

    std::cout << vectorCharU << " = "; printVector(u);
    std::cout << vectorCharV << " = "; printVector(v);
    printInnerProductVectors(vectorCharU, vectorCharV, innerProductUV);
    printNormalizeVector(vectorCharU, normU);
    printNormalizeVector(vectorCharV, normV);
    printCalculateAngle(vectorCharU, vectorCharV, angleDegreesUV);
    printIsPerpendicular(vectorCharU, vectorCharV, isPerpendicularUV);
    printIsUnitVector(vectorCharU, isUnitVectorU);
    printIsUnitVector(vectorCharV, isUnitVectorV);
    printGetUnitVector(vectorCharU, u);
    printGetUnitVector(vectorCharV, v);
    printGetProjectionVector(vectorCharU, projectionV);
}