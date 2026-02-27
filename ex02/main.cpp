#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() 
{
  Animal *cat = new Cat("mchicha");
  std::cout << "animal type: " << cat->getType() << std::endl;
  cat->makeSound();

  Animal *dog = new Dog("chien");
  std::cout << "animal type: " << dog->getType() << std::endl;
  dog->makeSound();

  delete cat;
  delete dog;

  return 0;
}