#include "Cat.hpp"

Cat::Cat() : Animal("Cat") 
{
  this->brain = new Brain();
  std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat(std::string type) : Animal(type) {
  this->brain = new Brain();
  std::cout << "Cat constructor" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat){
  this->brain = new Brain();
  this->type = cat.type;
  for(int i = 0; i < 100; i++)
    this->brain->setIdea(i, cat.brain->getIdea(i));
  std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat() 
{
  delete this->brain;
  std::cout << "Cat default destructor" << std::endl;
}

Cat &Cat::operator=(const Cat &cat)
{
  delete this->brain;
  this->type = cat.type;
  this->brain = new Brain();
  for(int i = 0; i < 100; i++)
    this->brain->setIdea(i, cat.brain->getIdea(i));
  std::cout << "Cat copy assignment operator called" << std::endl;
  return *this;
}

void Cat::makeSound() const
{
  std::cout << "Meow" << std::endl;
}

void Cat::setIdea(int index, const std::string& idea) {
  this->brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) const {
  return this->brain->getIdea(index);
} 