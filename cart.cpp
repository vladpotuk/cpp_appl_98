#include "cart.h"

Cart::Cart(double speed, double costPerKilometer) : speed(speed), costPerKilometer(costPerKilometer) {}

double Cart::calculateTime(double distance) const {
   
    return distance / speed;
}

double Cart::calculateCost(double weight) const {
    
    return costPerKilometer * weight;
}
