#include "Dog.hpp"

Dog::Dog() : Animal("Dog") 
{
  this->brain = new Brain();
  std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog(std::string type) : Animal(type) 
{
  this->brain = new Brain();
  std::cout << "Dog Parameter constructor" << std::endl;
}

Dog::Dog(const Dog &dog)  : Animal(dog)
{
  this->brain = new Brain();
  this->type = dog.type;
  for(int i = 0; i < 100; i++)
  {
    this->brain->setIdea(i, dog.brain->getIdea(i));
  }
  std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog() 
{
  delete this->brain;
  std::cout << "Dog default destructor" << std::endl;
}

Dog &Dog::operator=(const Dog &dog) 
{
  delete this->brain;
  this->type = dog.type;
  this->brain = new Brain();
  for(int i = 0; i < 100; i++)
    this->brain->setIdea(i, dog.brain->getIdea(i));
  std::cout << "Dog copy assignment operator called" << std::endl;
  return *this;
}

void Dog::makeSound() const 
{
  std::cout << "Woof" << std::endl;
}

void Dog::setIdea(int index, const std::string& idea) {
  this->brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) const {
  return this->brain->getIdea(index);
} 