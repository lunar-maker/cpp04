#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() 
{
  Animal* animal = new Animal();
  Animal* dog = new Dog();
  Animal* cat = new Cat();

  WrongAnimal *wrongCat = new WrongCat("wrong cat");

  wrongCat->makeSound();
  dog->makeSound();
  cat->makeSound();
  animal->makeSound();

  delete animal;
  delete dog;
  delete cat;
  delete wrongCat;

  return 0;
}