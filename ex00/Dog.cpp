#include "Dog.hpp"

Dog::Dog() : Animal("Dog") 
{
  std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog(std::string type) : Animal(type) 
{
  std::cout << "Dog constructor" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog)
{
  this->type = dog.type;
  std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog() 
{
  std::cout << "Dog default destructor" << std::endl;
}

Dog &Dog::operator=(const Dog &dog) 
{
  this->type = dog.type;
  std::cout << "Dog copy assignment operator called" << std::endl;
  return *this;
}

void Dog::makeSound() const 
{
  std::cout << "Woof" << std::endl;
}