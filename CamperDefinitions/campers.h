#ifndef CAMPERS_H
#define CAMPERS_H
#include <string>
#include "food.h"

class Camper
{
private:
    std::string name;
    double payment;
    Food foodItem;
public:
    Camper(std::string camperName);
    ~Camper();
};

#endif