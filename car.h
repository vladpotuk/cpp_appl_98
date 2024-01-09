#ifndef CAR_H
#define CAR_H

#include "transport.h"

class Car : public Transport {
public:
    Car(double speed, double costPerKilometer);

    
    double calculateTime(double distance) const override;
    double calculateCost(double weight) const override;

private:
    double speed;
    double costPerKilometer;
};

#endif 

