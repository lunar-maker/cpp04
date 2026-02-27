#include "Cat.hpp"

Cat::Cat() : Animal("Cat") 
{
  std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat(std::string type) : Animal(type) 
{
  std::cout << "Cat constructor" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat) 
{
  this->type = cat.type;
  std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat() 
{
  std::cout << "Cat default destructor" << std::endl;
}

Cat &Cat::operator=(const Cat &cat)
{
  this->type = cat.type;
  std::cout << "Cat copy assignment operator called" << std::endl;
  return *this;
}

void Cat::makeSound() const
{
  std::cout << "Meow" << std::endl;
}