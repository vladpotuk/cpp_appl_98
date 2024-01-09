#ifndef TRANSPORT_H
#define TRANSPORT_H

class Transport {
public:
    
    virtual double calculateTime(double distance) const = 0;
    virtual double calculateCost(double weight) const = 0;
};

#endif 
