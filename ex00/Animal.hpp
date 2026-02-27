#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
    protected:
      std::string type;
    public:
      Animal();
      Animal(std::string type);
      Animal(Animal const &animal);
      virtual ~Animal();
      Animal &operator=(const Animal &animal);
      virtual void makeSound() const;
      std::string getType() const;
};

#endif