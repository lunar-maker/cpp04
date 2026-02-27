#include "Ice.hpp"

Ice::Ice() : AMateria("ice"), name("ice") {
}

Ice::Ice(Ice const & src) : AMateria("ice") {
  this->name = src.name;
}

Ice &Ice::operator=(Ice const &src) {
  if(this != &src) {
    this->name = src.name;
  }
  return *this;
}

Ice::~Ice() {
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt " << target.getName() << " *" << std::endl;
}

Ice* Ice::clone() const {
    return new Ice(*this);
}