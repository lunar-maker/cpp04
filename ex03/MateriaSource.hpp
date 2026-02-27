#pragma once

#include "IMateriaSource.hpp"
#include <iostream>
#include <string>

class MateriaSource : public IMateriaSource {
    private:
        AMateria *inventory[2];
    public:
        MateriaSource();
        MateriaSource(MateriaSource const & src);
        ~MateriaSource();
        MateriaSource & operator=(MateriaSource const & rhs);
        void learnMateria(AMateria* materia);
        AMateria* createMateria(std::string const & type);
};