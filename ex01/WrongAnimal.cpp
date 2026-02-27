#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("not set") 
{
    std::cout << "WrongAnimal default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type) 
{
    std::cout << "WrongAnimal constructor" << std::endl;
    this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &object) 
{
    std::cout << "WrongAnimal copy constructor" << std::endl;
    *this = object;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &object)
{
    this->type = object.type;
    std::cout << "WrongAnimal copy assignment operator called" << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal() 
{
    std::cout << "WrongAnimal destructor" << std::endl;
}

std::string WrongAnimal::getType() const 
{
    return this->type;
}

void WrongAnimal::makeSound() const 
{
    std::cout << "The Wrong animal is making a sound" << std::endl;
}