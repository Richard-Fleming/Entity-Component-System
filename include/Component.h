#include <string>
#include <iostream>

class Component
{
public:
    Component(std::string t_name){name = t_name;}
    virtual std::string getName() {return name;}
    std::string name;
};

class HealthComponent : public Component
{
public:
    HealthComponent() : health(100), Component("Health"){}

    int getHealth(){return health;}
    void setHealth(int health) {this->health = health;}

private:
    int health;
};

class PositionComponent : public Component
{
public:
    PositionComponent(): x(100), y(200), Component("Position") {};

    int getX(){return x;}
    int getY(){return y;}
    void setX(int t_x){this->x = t_x;}
    void setY(int t_y){this->y = t_y;}

private:
    int x;
    int y;
};

class InputComponent : public Component
{
public:
    InputComponent(): Component("Input"){};
    
    void left(){std::cout << "Left";}
    void right(){std::cout << "right";}
};