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
      Animal(const Animal &animal);
      virtual ~Animal();
      Animal &operator=(const Animal &animal);
      virtual void makeSound() const = 0;
      std::string getType() const;
      virtual void setIdea(int index, const std::string& idea) = 0;
      virtual std::string getIdea(int index) const = 0;
};

#endif