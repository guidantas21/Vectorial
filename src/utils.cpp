#include <cmath>

double convertDegreesToRadians(double angleDegrees) {
    return (double) angleDegrees * M_PI / 180.0;
}

double convertRadiansToDegrees(double angleRadians) {
    return (double) angleRadians * 180.0 / M_PI;
}