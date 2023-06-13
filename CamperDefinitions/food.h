#ifndef FOOD_H
#define FOOD_H
#include <string>

class Food
{
private:
    std::string name;
    double quantity;
public:
    Food(std::string foodName);
    ~Food();
};

#endif