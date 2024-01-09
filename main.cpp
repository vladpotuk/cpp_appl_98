#include <iostream>
#include "car.h"
#include "bicycle.h"
#include "cart.h"

int main() {
    Car car(60.0, 0.1);
    Bicycle bicycle(20.0, 0.05);
    Cart cart(10.0, 0.02);

    double distance = 100.0;
    double weight = 50.0;

    std::cout << "Car:" << std::endl;
    std::cout << "Time: " << car.calculateTime(distance) << " hours" << std::endl;
    std::cout << "Cost: $" << car.calculateCost(weight) << std::endl;

    std::cout << "\nBicycle:" << std::endl;
    std::cout << "Time: " << bicycle.calculateTime(distance) << " hours" << std::endl;
    std::cout << "Cost: $" << bicycle.calculateCost(weight) << std::endl;

    std::cout << "\nCart:" << std::endl;
    std::cout << "Time: " << cart.calculateTime(distance) << " hours" << std::endl;
    std::cout << "Cost: $" << cart.calculateCost(weight) << std::endl;

    return 0;
}
