#include "AMateria.hpp"

AMateria::AMateria() : type("none") {
  // std::cout << "Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : type(type) {
  // std::cout << "Copy constructor called" << std::endl;
}

AMateria::AMateria(AMateria const &src) {
  // std::cout << "Copy constructor called" << std::endl;
  *this = src;
}

std::string const & AMateria::getType() const {
  return (this->type);
}

AMateria::~AMateria() {
  // std::cout << "Destructor called" << std::endl;
}

void AMateria::use(ICharacter& target) {
  std::cout << "* " << target.getName() << " " << this->type << std::endl;
  (void)target;
}