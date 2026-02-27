#pragma once

#include "ICharacter.hpp"
#include <iostream>
#include <string>

class Character : public ICharacter {
    private:
        std::string name;
        AMateria *inventory[4];
    public:
        Character(std::string const & name);
        Character(Character const & src);
        ~Character();
        Character & operator=(Character const & obj);
        std::string const & getName() const;
        void equip(AMateria* materia);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
}; 