#include "Animal.hpp"

class Dog : public Animal {
    public:
      Dog();
      Dog(std::string type);
      Dog(const Dog &dog);
      ~Dog();
      Dog &operator=(const Dog &dog);
      void makeSound() const;
};