#include "bicycle.h"

Bicycle::Bicycle(double speed, double costPerKilometer) : speed(speed), costPerKilometer(costPerKilometer) {}

double Bicycle::calculateTime(double distance) const {
    
    return distance / speed;
}

double Bicycle::calculateCost(double weight) const {
    
    return costPerKilometer * weight;
}
