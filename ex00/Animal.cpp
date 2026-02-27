#include "Animal.hpp"

Animal::Animal() : type("animal") 
{
  std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal(std::string type) : type(type) 
{
  std::cout << "Animal constructor" << std::endl;
  this->type = type;
}

Animal::Animal(const Animal &animal) 
{
  this->type = animal.type;
  std::cout << "Animal copy constructor" << std::endl;
}

Animal &Animal::operator=(const Animal &animal)
{
  this->type = animal.type;
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
  std::cout << "The animal is making a sound" << std::endl;
}