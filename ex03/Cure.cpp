#include "Cure.hpp"

Cure::Cure() : AMateria("cure"), name("cure") {
    // std::cout << "Cure default constructor" << std::endl;
}

Cure::Cure(Cure const & src) : AMateria("cure") {
    // std::cout << "Cure copy constructor" << std::endl;
    *this = src;
}

Cure::~Cure() {
    // std::cout << "Cure destructor" << std::endl;
}

Cure & Cure::operator=(Cure const & obj) {
    // std::cout << "Cure assignment operator" << std::endl;
    if (this != &obj)
        this->name = obj.name;
    return *this;
}

Cure* Cure::clone() const {
    return new Cure(*this);
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}