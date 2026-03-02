#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() 
{
  int i;
  int size = 4;

  i = 0;
  Animal* animals[4];
  while (i < size)
  {
    if(i < size / 2)
      animals[i] = new Dog();
    else
      animals[i] = new Cat();
    i++;
  }

  animals[0]->setIdea(0, "dog idea 1");
  animals[0]->setIdea(1, "dog idea 2");
  animals[0]->setIdea(2, "dog idea 3");

  animals[2]->setIdea(0, "cat idea 1");
  animals[2]->setIdea(1, "cat idea 2");
  animals[2]->setIdea(2, "cat idea 3");

    Dog dog2;

    dog2 = *(Dog*)animals[0];
    std::cout << "temp dog ---> " << dog2.getIdea(0) << std::endl;
    std::cout << "temp dog ---> " << dog2.getIdea(1) << std::endl;
    std::cout << "temp dog ---> " << dog2.getIdea(2) << std::endl;

    Cat cat2(*(Cat*)animals[2]);

    std::cout << "temp cat ---> " << cat2.getIdea(0) << std::endl;
    std::cout << "temp cat ---> " << cat2.getIdea(1) << std::endl;
    std::cout << "temp cat ---> " << cat2.getIdea(2) << std::endl;
  std::cout << "dog ---> " << animals[0]->getIdea(0) << std::endl;
  std::cout << "dog ---> " << animals[0]->getIdea(1) << std::endl;
  std::cout << "dog ---> " << animals[0]->getIdea(2) << std::endl;
  std::cout << "cat ---> " << animals[2]->getIdea(0) << std::endl;
  std::cout << "cat ---> " << animals[2]->getIdea(1) << std::endl;
  std::cout << "cat ---> " << animals[2]->getIdea(2) << std::endl;

  for(int i = 0; i < size; i++)
    delete animals[i];

  return 0;
}