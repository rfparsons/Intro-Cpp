#ifndef CAMPERS_H
#define CAMPERS_H
#include <string>
#include "Food.h"

class Camper
{
private:
    std::string name;
    double payment;
    Food foodItem;
public:
    Camper();
    Camper(std::string camperName);
    ~Camper();
    void setName(std::string newName);
    std::string getName();
    void setPayment(double newPayment);
    double getPayment();
    void setFood(Food newFood);
    Food getFood();
};

#endif
