#ifndef BICYCLE_H
#define BICYCLE_H

#include "transport.h"

class Bicycle : public Transport {
public:
    Bicycle(double speed, double costPerKilometer);

    
    double calculateTime(double distance) const override;
    double calculateCost(double weight) const override;

private:
    double speed;
    double costPerKilometer;
};

#endif 
