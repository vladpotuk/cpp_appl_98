
#include "car.h"

Car::Car(double speed, double costPerKilometer) : speed(speed), costPerKilometer(costPerKilometer) {}

double Car::calculateTime(double distance) const {
    return distance / speed;
}

double Car::calculateCost(double weight) const {
    
    return costPerKilometer * weight;
}
