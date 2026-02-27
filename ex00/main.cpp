#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() 
{
  Animal* animal = new Animal();
  Animal* dog = new Dog();
  Animal* cat = new Cat();

  WrongAnimal *wrongCat = new WrongCat("wrong cat");

  std::cout << "-----------------------------" << std::endl;
  wrongCat->makeSound();
  std::cout << "-----------------------------" << std::endl;
  dog->makeSound();
  std::cout << "-----------------------------" << std::endl;
  cat->makeSound();
  std::cout << "-----------------------------" << std::endl;
  animal->makeSound();
  std::cout << "-----------------------------" << std::endl;

  delete animal;
  delete dog;
  delete cat;
  delete wrongCat;

  return 0;
}