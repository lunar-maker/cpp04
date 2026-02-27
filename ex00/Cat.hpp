#include "Animal.hpp"

class Cat : public Animal {
    public:
      Cat();
      Cat(std::string type);
      Cat(const Cat &cat);
      ~Cat();
      Cat &operator=(const Cat &cat);
      void makeSound() const;
};