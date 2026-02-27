#pragma once

#include "AMateria.hpp"
#include <iostream>
#include <string>

class Cure : public AMateria {
    private:
        std::string name;
    public:
        Cure();
        Cure(Cure const & src);
        ~Cure();
        Cure & operator=(Cure const &obj);
        Cure* clone() const;
        void use(ICharacter& target);
};