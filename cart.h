#ifndef CART_H
#define CART_H

#include "transport.h"

class Cart : public Transport {
public:
    Cart(double speed, double costPerKilometer);

    
    double calculateTime(double distance) const override;
    double calculateCost(double weight) const override;

private:
    double speed;
    double costPerKilometer;
};

#endif 

