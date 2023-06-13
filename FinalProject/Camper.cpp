#include "Camper.h"

Camper::Camper()
{
    name = "";
    payment = 0;
}

Camper::Camper(std::string camperName)
{
    name = camperName;
    payment = 0;
}

Camper::~Camper()
{
}

void Camper::setName(std::string newName)
{
    name = newName;
}

std::string Camper::getName()
{
    return name;
}

void Camper::setPayment(double newPayment)
{
    payment = newPayment;
}

double Camper::getPayment()
{
    return payment;
}

void Camper::setFood(Food newFood)
{
    foodItem = newFood;
}

Food Camper::getFood()
{
    return foodItem;
}
