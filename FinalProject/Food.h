#ifndef FOOD_H
#define FOOD_H
#include <string>

class Food
{
private:
    std::string name;
    double quantity;
public:
    Food();
    Food(std::string foodName);
    Food(std::string foodName, double foodQuantity);
    ~Food();
    void setName(std::string newName);
    std::string getName();
    void setQuantity(double newQuantity);
    double getQuantity();
    void operator = (const Food &F);
};

#endif
