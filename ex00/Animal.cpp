#include "Animal.hpp"

Animal::Animal() : type("a") 
{
  std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal(std::string type) : type(type) 
{
  std::cout << "Animal constructor" << std::endl;
  this->type = type;
}

Animal::Animal(const Animal &a) 
{
  this->type = a.type;
  std::cout << "Animal copy constructor" << std::endl;
}

Animal &Animal::operator=(const Animal &a)
{
  this->type = a.type;
  std::cout << "Animal copy assignment operator called" << std::endl;
  return *this;
}

Animal::~Animal() 
{
  std::cout << "Animal destructor" << std::endl;
}

std::string Animal::getType() const 
{
  return this->type;
}

void Animal::makeSound() const 
{
  std::cout << "Unrecognized animal sound" << std::endl;
}