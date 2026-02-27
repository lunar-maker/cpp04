#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    int i;

    i = 0;
    while (i < 2) {
        inventory[i] = NULL;
        i++;
    }
}

MateriaSource::MateriaSource(MateriaSource const & src) {
    int i;

    i = 0;
    while (i < 2) {
        if (src.inventory[i])
            inventory[i] = src.inventory[i]->clone();
        else
            inventory[i] = NULL;
        i++;
    }
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 2; i++)
        if (inventory[i])
            delete inventory[i];
}

MateriaSource & MateriaSource::operator=(MateriaSource const &obj) {
    if(this != &obj) {
        int i;

        i = 0;
        while (i < 2) {
            if (inventory[i])
                delete inventory[i];
            if (obj.inventory[i])
                inventory[i] = obj.inventory[i]->clone();
            else
                inventory[i] = NULL;
            i++;
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* materia) {
    int i;

    i = 0;
    while(i < 2) {
        if (!inventory[i]) {
            inventory[i] = materia;
            break;
        }
        i++;
    }
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    int i = 0;

    while (i < 2) {
        if (inventory[i] && inventory[i]->getType() == type)
            return inventory[i]->clone();
        i++;
    }
    return NULL;
}