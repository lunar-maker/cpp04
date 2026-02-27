#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") 
{
    std::cout << "WrongCat default constructor" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type) 
{
    std::cout << "WrongCat constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &object) 
{
    std::cout << "WrongCat copy constructor" << std::endl;
    *this = object;
}

WrongCat::~WrongCat() 
{
    std::cout << "WrongCat default destructor" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &object)
{
    this->type = object.type;
    std::cout << "WrongCat copy assignment operator called" << std::endl;
  return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "A Wrongcat says: Meoooooooooow" << std::endl;
}