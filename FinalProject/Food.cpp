#include "Food.h"

Food::Food()
{
    name = "";
    quantity = 0;
}

Food::Food(std::string foodName)
{
    name = foodName;
    quantity = 0;
}

Food::Food(std::string foodName, double foodQuantity)
{
    name = foodName;
    quantity = foodQuantity;
}

Food::~Food()
{
}

void Food::setName(std::string newName)
{
    name = newName;
}

std::string Food::getName()
{
    return name;
}

void Food::setQuantity(double newQuantity)
{
    quantity = newQuantity;
}

double Food::getQuantity()
{
    return quantity;
}

void Food::operator =(const Food &F)
{
    name = F.name;
    quantity = F.quantity;
}
