#pragma once

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Cat : public Animal {
  private:
    Brain *brain;
  public:
    Cat();
    Cat(std::string type);
    Cat(const Cat &cat);
    ~Cat();
    Cat &operator=(const Cat &cat);
    void makeSound() const;
    void setIdea(int index, const std::string& idea);
    std::string getIdea(int index) const;
};